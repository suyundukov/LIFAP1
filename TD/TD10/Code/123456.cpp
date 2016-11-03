/* 1.           -> Déclarer un tableau de chaîne de caractère */
/* 2. Procédure -> Initialiser la grille avec des "*" */
/* 3. Procédure -> Inserer la chaine de caractères qui est demandé à USER */
/* 4. Procédure -> Afficher le contenu d'une case, demandé à USER */
/* 5. Fonction  -> Renvoyer 0 si la case 1 et la case 2 sont identiques */
/* 6.           -> Simuler le jeu de MEMORY à deux joueurs */
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iostream>

const int sizeG = 2;

/* Procédure 1 */

void initGrille(char tab[sizeG][sizeG][15])
{
  for (int i = 0; i < sizeG; ++i) {
    for (int j = 0; j < sizeG; ++j) {
      strcpy(tab[i][j], "*");
    }
  }
}

/* Procédure 2 */

void remplirGrille(char tab[sizeG][sizeG][15])
{
  int rI;
  int rJ;
  char temp[15];
  
  srand(time(NULL));
  
  for (int i = 0; i < ((sizeG * sizeG) / 2); ++i) {
    std::cout << "Donne moi une chaîne : " << std::flush;
    std::cin >> temp;
    
    for (int j = 0; j < 2; ++j) {
      do {
        rJ = rand() % sizeG;
        rI = rand() % sizeG;
      } while (strcmp(tab[rI][rJ], "*") != 0);
        strcpy(tab[rI][rJ], temp);
    }
  }
}

/* Fonction */

bool verif(char tab[sizeG][sizeG][15], char sol[sizeG][sizeG][15], int pX,
           int pY, int pX1, int pY1)
{
  if (strcmp(tab[pX][pY], tab[pX1][pY1]) == 0) {
    strcpy(sol[pX][pY], tab[pX][pY]);
    strcpy(sol[pX1][pY1], tab[pX1][pY1]);
    return true;
  } else {
    return false;
  }
}

/* Procédure 3 */

void afficheChoix(char tab[sizeG][sizeG][15], char sol[sizeG][sizeG][15],
                  int pX, int pY, int pX1, int pY1)
{
  for (int i = 0; i < sizeG; ++i) {
    for (int j = 0; j < sizeG; ++j) {
      if ((i == pX && j == pY) || (i == pX1 && j == pY1))
        std::cout << tab[i][j] << "\t" << std::flush;
      else
        std::cout << sol[i][j] << "\t" << std::flush;
    }
    std::cout << std::endl;
  }
}

void choix(char tab[sizeG][sizeG][15], char sol[sizeG][sizeG][15],
           int &pl1, int &pl2, int player)
{
  int pX;
  int pX1;
  int pY;
  int pY1;
  
  std::cout << "Donne moi les coordonées de la 1ère case :" << std::flush;
  std::cout << "X : " << std::flush;
  std::cin >> pX;
  std::cout << "Y : " << std::flush;
  std::cin >> pY;
  std::cout << "Donne moi les coordonnées de la 2ème case : " << std::flush;
  std::cout << "X : " << std::flush;
  std::cin >> pX1;
  std::cout << "Y : " << std::flush;
  std::cin >> pY1;
  
  afficheChoix(tab, sol, pX, pY, pX1, pY1);
  if (verif(tab, sol, pX, pY, pX1, pY1)) {
    if (player == 1)
      ++pl1;
    else
      ++pl2;
  }
}

/* Programme principal / Utilisation */

int main()
{
  int pl1; // Le score pour le joueur N° 1
  int pl2; // Le score pour le joueur N° 2
  int player;
  char tab[sizeG][sizeG][15];
  char sol[sizeG][sizeG][15];
  
  pl1 = 0; 
  pl2 = 0;
  player = 1; // Le joueur 1 commence le jeux
  
  initGrille(tab); // Initialisation de la grille principal
  initGrille(sol); // Initialisation de la grille de solution
  remplirGrille(tab); // Remplissage de la grille principal
  
  while ((pl1 + pl2) < (sizeG * sizeG / 2)) {
    std::cout << "C'est le tour de joueur " << player << std::endl;
    
    choix(tab, sol, pl1, pl2, player);
    
    if (player == 1) // Si c'était le tour de joueur N° 1
      player = 2; // Alors ça sera le tour de joueur N° 2
    else
      player = 1;
  }
  
  // Affichage de message de fin de jeux
  if (pl1 != pl2) {
    if (pl1 > pl2)
      player = 1;
    else
      player = 2;
    std::cout << "Bravo ! Le joueur " << player << " a gagné. Le score est "
              << pl1 << " : " << pl2 << std::endl;
  } else {
    std::cout << "Pas de gagnant! La loose, le match est nul. Le score est "
              << pl1 << " : " << pl2 << std::endl;
  }
  
  return 0;
}
