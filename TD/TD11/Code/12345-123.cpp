/**
 * Idée principal -> Simuler le jeu de démineur
 */
#include <cstdlib>
#include <ctime>
#include <iostream>

// Définission des constantes
const short SIZE = 10;
const short MINES = 9;

// Définission de la structure
struct CaseGrille {
  int contenu;
  bool estDecouverte;
};

// Initialisation de grille de jeu
void initGrille(CaseGrille tab[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; ++i)
    for (int j = 0; j < SIZE; ++j) {
      tab[i][j].contenu = 0;
      tab[i][j].estDecouverte = false;
    }
}

// Position des bombes
void poserBombe(CaseGrille tab[SIZE][SIZE])
{
  int randX;
  int randY;
  
  srand(static_cast<unsigned int>(time(NULL)));
  
  for (int i = 0; i < MINES; ++i) {
    do {
      randX = rand() % SIZE;
      randY = rand() % SIZE;
    } while (tab[randX][randY].contenu != 0);
    tab[randX][randY].contenu = -1;
  }
}

// Comptage de mines / Si la case a une bombe 'case++'
void compterMines(CaseGrille tab[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; ++i)
    for (int j = 0; j < SIZE; ++j)
      if (tab[i][j].contenu != -1)
        for (int k = (i - 1 < 0) ? 0 : i - 1; k <= i + 1 && k != SIZE; ++k)
          for (int m = (j - 1 < 0) ? 0 : j - 1; m <= j + 1 && m != SIZE; ++m)
            if (tab[k][m].contenu == -1)
              tab[i][j].contenu += 1;
}

// Affichage de la grille
void afficherGrille(CaseGrille tab[SIZE][SIZE])
{
  // Affichage de ligne avec les chiffre
  std::cout << " " << std::flush; // Pour un petit décallage
  for (int i = 0; i < SIZE; ++i)
    std::cout << " " << i << std::flush;
  std::cout << std::endl;
  // Affichage de reste de la grille
  for (int i = 0; i < SIZE; ++i) {
    std::cout << i << std::flush;
    for (int j = 0; j < SIZE; ++j)
      if (tab[i][j].estDecouverte == true) {
        if (tab[i][j].contenu == -1) {
          std::cout << " X" << std::flush;
        } else {
          std::cout << " " << tab[i][j].contenu << std::flush;
        }
      } else {
        std::cout << " -" << std::flush;
      }
    std::cout << std::endl;
  }
}

// Affichage de grille entière
void afficherGrilleEntiere(CaseGrille tab[SIZE][SIZE])
{
  std::cout << " " << std::flush;
  for (int i = 0; i < SIZE; ++i)
    std::cout << " " << i << std::flush;
  std::cout << std::endl;
  for (int i = 0; i < SIZE; ++i) {
    std::cout << i << std::flush;
    for (int j = 0; j < SIZE; ++j) {
      if (tab[i][j].contenu == -1)
        std::cout << " X" << std::flush;
      else
      std::cout << " " << tab[i][j].contenu << std::flush;
    }
    std::cout << std::endl;
  }
}

// Saisi de choix par USER
int decouvrirUneCase(CaseGrille tab[SIZE][SIZE], int& x, int& y)
{
  int val;
  
  do {
    std::cout << "Donne-moi les coordonnees de la case :" << std::endl;
    std::cout << "X : " << std::flush;
    std::cin >> x;
    std::cout << "Y : " << std::flush;
    std::cin >> y;
  } while (tab[x][y].estDecouverte);
  
  if (tab[x][y].contenu == -1)
    val = 0;
  else
    val = 1;
  
  return val;
}

// Simulation du jeu
int joueur(CaseGrille tab[SIZE][SIZE], int casesRest)
{
  bool estBombe;
  int val;
  int x;
  int y;
  
  estBombe = false;
  
  while ((casesRest != 0) && (estBombe == false)) {
    val = decouvrirUneCase(tab, x, y);
    if (val == 0) {
      estBombe = true;
      tab[x][y].estDecouverte = true;
    } else if (tab[x][y].estDecouverte == false) {
      tab[x][y].estDecouverte = true;
      casesRest -= 1;
    } else {
      std::cout << "Case déjà trouvé" << std::endl;
    }
    std::cout << "\nNombre de case à trouver : " << casesRest << std::endl;
    afficherGrille(tab);
  }
  // S'il y a plus de case à trouvé
  if (casesRest == 0)
    // Partie finie et gagnée
    return 0;
  else
    // Partie finie et perdue
    return 1;
}

// Programme principal
int main()
{
  CaseGrille tab[SIZE][SIZE];
  int nmbrCase;
  int finPartie;

  nmbrCase = (SIZE * SIZE) - MINES;
  
  std::cout << "Le nombre de case à trouver : " << nmbrCase << std::endl;
  
  initGrille(tab);
  afficherGrille(tab);
  poserBombe(tab);
  compterMines(tab);

  finPartie = joueur(tab, nmbrCase);
  
  if (finPartie == 0) {
    std::cout << "\nGagné" << std::endl;
  } else {
    std::cout << "\nPerdu !!!\n" << std::endl;
    afficherGrilleEntiere(tab);
  }

  return 0;
}
