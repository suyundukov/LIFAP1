/**
 * Idée principal -> Simuler le jeu de démineur
 */
#include <Grapic.h>
#include <ctime>  // Pour pouvoir utiliser 'time();'
#include <cstdlib>  // Pour pouvoir utiliser 'rand();' et 'srand();' 

using namespace grapic;
using namespace std;

const short DIMW = 500;

struct CaseGrille {
  short contenu;
  bool estDecouverte;
  bool estDrapeau;
};

struct Jeu {
  CaseGrille tab[100][100];  // Notre grille
  short dx;  // Nombre de colonne
  short dy;  // Nombre de ligne
  short nmbrMines;  // Nombre de mines
  short nmbrDecouvrir;  // Nombre à decouvrir (des cases)
  short mineX;  // Coordonée X de la mine, sur laquelle on est tombé
  short mineY;  // Coordonée Y de la mine sur laquelle on est tombé
  bool estPerdu;  // Perdu ou non
  Image imMine;  // Image pour la mine
  Image imDrapeau;  // Image pour le drapeau
};

// Initialisation de la grille
void initGrille(Jeu &game)
{
  for (int i = 0; i < game.dx; ++i) {
    for(int j = 0; j < game.dy; ++j) {
      game.tab[i][j].contenu = 0;
      game.tab[i][j].estDecouverte = false;
      game.tab[i][j].estDrapeau = false;
    }
  }
}

// Positionnement aléatoire des miness
void poserMines(Jeu &game)
{
  int randX;
  int randY;

  // La conversion ici n'est pas nécessaire, mais je reçois une alerte :
  // 'Implicit conversion loses integer precision ... ' sur XCode sous Mac
  srand(static_cast<unsigned int>(time(NULL)));
  
  for (int i = 0; i < game.nmbrMines; ++i) {
    do {
      randX = rand() % game.dx;
      randY = rand() % game.dy;
    } while (game.tab[randX][randY].contenu != 0);
    game.tab[randX][randY].contenu = -1;
  }
}

// Comptage des mines pour les cases adjacentes
void compterMines(Jeu &game)
{
  for (int i = 0; i < game.dx; ++i) {
    for (int j = 0; j < game.dy; ++j) {
      // Si c'est une mines, alors ...
      if (game.tab[i][j].contenu != -1) {
        // Si i - 1 < 0, alors k = 0, sinon k = i - 1, c'est nécessaire si on
        // veut pas dépasser les limites de la grille.
        for (int k = (i - 1 < 0) ? 0 : i - 1; k <= i + 1 && k != game.dx; ++k) {
          // Ici pareil, si on dépasse la grille, les calculs sont bidons.
          // Ici on a : Si j - 1 < 0, alors m = 0, sinon m = j - 1
          for (int m = (j - 1 < 0) ? 0 : j - 1; m <= j + 1 && m != game.dy; ++m) {
            if (game.tab[k][m].contenu == -1)
              game.tab[i][j].contenu += 1;
          }
        }
      }
    }
  }
}

// Initialisation du jeu
void initJeu(Jeu &game)
{
  game.dx = 10;
  game.dy = 10;
  game.nmbrMines = 9;
  game.nmbrDecouvrir = game.dx * game.dy - game.nmbrMines;
  game.estPerdu = false;
  game.mineX = 666;
  game.mineY = 666;
  game.imMine = image("data/mine.png");
  game.imDrapeau = image("data/flag.png");

  initGrille(game);
  poserMines(game);
  compterMines(game);
}

int caseVersEcranX(const Jeu &game, int x)
{
  return int(x * DIMW / game.dx);
}

int caseVersEcranY(const Jeu &game, int y)
{
  y = 9 - y;
  return int(y * DIMW / game.dy);
}

int ecranVersCaseX(const Jeu &game, int x)
{
  return int(x / (DIMW / game.dx));
}

int ecranVersCaseY(const Jeu &game, int y)
{
  return (9 - int(y / (DIMW / game.dy)));
}

// Procédure pour le clic gauche
void cliquerGauche(Jeu &game)
{
  if (isMousePressed(SDL_BUTTON_LEFT)) {
    int x;
    int y;
    int i;
    int j;

    mousePos(x, y);
    
    i = ecranVersCaseX(game,x);
    j = ecranVersCaseY(game,y);

    // Si la case n'était pas joué ...
    if (!game.tab[i][j].estDecouverte) {
      game.tab[i][j].estDecouverte = true;  // On la marque étant joué
      game.nmbrDecouvrir -= 1;  // Et on soustrait 1 au nombre à découvrir
    }

    // Si le drapeau est déjà posé, alors on s'en débarasse
    if (game.tab[i][j].estDrapeau)
      game.tab[i][j].estDrapeau = false;

    // Si on touche une mine, on a perdu et on récupère ses coordonnées
    if (game.tab[i][j].contenu == -1) {
      game.mineX = i;
      game.mineY = j;
      game.estPerdu = true;
    }
  }
}

// Procédure pour le clic droit
void cliquerDroit(Jeu &game)
{
  if (isMousePressed(SDL_BUTTON_RIGHT)) {
    int x;
    int y;
    int i;
    int j;

    mousePos(x, y);
    
    i = ecranVersCaseX(game,x);
    j = ecranVersCaseY(game,y);

    // Si le drapeau est déja posé ou la case est déjà joué, 
    // le drapeau est FAUX, comme ça on empeche à l'utilisateur de mettre
    // le drapeau après avoir joué la case
    if (game.tab[i][j].estDrapeau || game.tab[i][j].estDecouverte)
      game.tab[i][j].estDrapeau = false;
    else
      game.tab[i][j].estDrapeau = true;
  }
}

// Affichage de la grille
void afficherGrille(Jeu game)
{
  for (int i = 0; i < game.dx; ++i) {
    for (int j = 0; j < game.dy; ++j) {
      if (game.tab[i][j].estDecouverte) {
        if (game.tab[i][j].contenu == -1) {
          image_draw(game.imMine, caseVersEcranX(game, i) + 5,
                     caseVersEcranY(game, j) + 5, DIMW / game.dx - 10,
                     DIMW / game.dy - 10);
        } else {
          print(caseVersEcranX(game, i) + 16, caseVersEcranY(game, j) + 3,
                game.tab[i][j].contenu);
        }
      }
      if (game.tab[i][j].estDrapeau) {
        image_draw(game.imDrapeau, caseVersEcranX(game, i) + 5,
                     caseVersEcranY(game, j) + 5, DIMW / game.dx - 10,
                     DIMW / game.dy - 10);
      }
    }
  }
}

// Afichage complete de la grille | Utilisé à la fin du jeu
void afficherGrilleEntiere(Jeu game)
{
  for (int i = 0; i < game.dx; ++i) {
    for (int j = 0; j < game.dy; ++j) {
      // Si le drapeau à été posé
      if (game.tab[i][j].estDrapeau) {
        // Si il y avait une mines sous le drapeau, on affiche le drapeau
        if (game.tab[i][j].contenu == -1) {
          image_draw(game.imDrapeau, caseVersEcranX(game, i) + 5,
                     caseVersEcranY(game, j) + 5, DIMW / game.dx - 10,
                     DIMW / game.dy - 10);
        } else {  /* Sinon on affiche une mines croisé */
          image_draw(game.imMine, caseVersEcranX(game, i) + 5,
                     caseVersEcranY(game, j) + 5, DIMW / game.dx - 10,
                     DIMW / game.dy - 10);
          color(255, 0, 0);
          line(caseVersEcranX(game, i), caseVersEcranY(game, j),
               caseVersEcranX(game, i) + DIMW / game.dx,
               caseVersEcranY(game, j) + DIMW / game.dx);
          line(caseVersEcranX(game, i), caseVersEcranY(game, j)
               + DIMW / game.dx, caseVersEcranX(game, i) + DIMW / game.dx,
               caseVersEcranY(game, j));
        }
      } else if (game.tab[i][j].contenu == -1) {
        // Si on est sauté sur cette mine, alors on la donne un fond rouge
        if (i == game.mineX && j == game.mineY) {
          rectangleFill(caseVersEcranX(game, i), caseVersEcranY(game, j),
                        caseVersEcranX(game, i) + DIMW / game.dx,
                        caseVersEcranY(game, j) + DIMW / game.dx);
        }
        image_draw(game.imMine, caseVersEcranX(game, i) + 5,
                   caseVersEcranY(game, j) + 5, DIMW / game.dx - 10,
                   DIMW / game.dy - 10);
      } else { /* Si ce n'est pas une mine alors ... */
        print(caseVersEcranX(game, i) + 16, caseVersEcranY(game, j) + 3,
              game.tab[i][j].contenu);
      }
    }
  }
}

// La procédure principal du jeu
void playGame(Jeu &game)
{
  backgroundColor(255, 255, 255);  // Couleur du fond

  color(0, 0, 0);  // Couleur de la grille
  grid(0, 0, DIMW - 1, DIMW - 1, game.dx, game.dy);
  
  color(0, 92, 210);  // Couleur de texte
  fontSize(35);  // Taille de la police
  
  // Si estPerdu est FAUX alors on continue ...
  if (!game.estPerdu) {
    afficherGrille(game);
    cliquerGauche(game);
    cliquerDroit(game);
  } else {  /* Sinon le jeu s'arrête et on affiche un message */
    winClear();  // On "nettoie" l'écran
    color(0, 0, 0);  // La couleur pour la grille
    grid(0, 0, DIMW - 1, DIMW - 1, game.dx, game.dy);  // La grille
    color(255, 0, 0);  // Ça c'est la couleur rouge
    afficherGrilleEntiere(game);  // Affichage complete de la grille
    color(255, 255, 255, 200);  // Une couleur blanc - transparent
    rectangleFill(0, 0, 500, 500);  // Notre fond
    color(0, 0, 0);  // Couleur pour le message
    fontSize(50);  // Taille de police pour le message
    print(178, 225, "PERDU");  // Et à la fin notre message
  }

  // Si il ne reste plus de case à decouvrir alors on affiche le message
  if (game.nmbrDecouvrir == 0) {
    winClear();
    color(0, 0, 0);
    grid(0, 0, DIMW - 1, DIMW - 1, game.dx, game.dy);
    color(0, 255, 0);  // Ça c'est la couleur verte
    afficherGrilleEntiere(game);
    color(255, 255, 255, 200);
    rectangleFill(0, 0, 500, 500);
    color(0, 0, 0);
    fontSize(50);
    print(178, 225, "GAGNE");
  }
}

int main()
{
  Jeu game1;
  bool stop;

  stop = false;

  winInit("Minesweeper", DIMW, DIMW);
  setKeyRepeatMode(false);
  initJeu(game1);
  while(!stop) {
    winClear();

    playGame(game1);

    stop = winDisplay();
  }
  winQuit();

  return 0;
}
