/* 1. Procédure -> Initialiser la grille du morpion à vide */
/* 2. Procédure -> Afficher la grille du morpion */
/* 3. Procédure -> Mettre un pion sur la grille */
/* 4. Fonction -> Tester si le joueur a gagné */
/* 5. Programme principal */
#include <iostream>

using namespace std;

/* Procédure 1 */

void initialiseGrille(char gr[3][3])
{
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      gr[i][j] = '_';
    }
  }
}

/* Procédure 2 */

void afficheGrille(char gr[3][3])
{
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << gr[i][j] << "\t";
    }
    cout << endl;
  }
}

/* Procédure 3 */

void metUnPionSurLaGrille(char gr[3][3], char player)
{
  int pY;
  int pX;
  
  do {
    cout << "Donne moi les coordonées : ";
    cin >> pY >> pX;
    
    if (gr[pY][pX] == 'X' || gr[pY][pX] == 'O')
      cout << "Cette case est déjà remplie. Recommence !" << endl;
  } while ((pY > 3 && pY < 0) || (pX > 3 && pX < 0) || gr[pY][pX] != '_');
  
  if (player == 1)
    gr[pY][pX] = 'X';
  else
    gr[pY][pX] = 'O';
}

/* Fonction */

bool testFinJeu(char gr[3][3], int &plWin)
{
  bool n;
  float sumH;
  float sumV;
  
  n = false;
  
  for (int i = 0; i < 3; ++i) {
    sumH = 0;
    sumV = 0;
    for (int j = 0; j < 3; ++j) {
      // Case horizontale
      if (gr[i][j] == 'X')
        sumH += 1.0;
      else if (gr[i][j] == 'O')
        sumH += 5.0;
      else
        sumH += 20.0;
      // Case verticale
      if (gr[j][i] == 'X')
        sumV += 1.0;
      else if (gr[j][i] == 'O')
        sumV += 5.0;
      else
        sumH += 20.0;
    }
    if (sumH / 3.0 == 1 || sumV / 3.0 == 1 || sumH / 15.0 == 1 || sumV / 15.0 == 1) {
      n = true;
      if (sumH / 3.0 == 1 || sumV / 3.0 == 1)
        plWin = 1;
      else
        plWin = 2;
      break;
    }
  }
  // Case diagonale
  if (((gr[0][0] == gr[1][1] && gr[1][1] == gr[2][2]) ||
      (gr[0][2] == gr[1][1] && gr[1][1] == gr[2][0])) && gr[1][1] != '_') {
    n = true;
    if (gr[1][1] == 'X')
      plWin = 1;
    else
      plWin = 2;
  }
  
  return n;
}

/* Utilisation / Programme principal */ 

int main()
{
  char gr[3][3];
  int i;
  int pl;
  int plWin;
  
  i = 0;
  pl = 1;
  
  initialiseGrille(gr);
  
  while (i < 9) {
    afficheGrille(gr);
    metUnPionSurLaGrille(gr, pl);
    if (pl == 1)
      pl = 2;
    else
      pl = 1;
    ++i;
    if (testFinJeu(gr, plWin) == true) {
      afficheGrille(gr);
      cout << "Bravo, joueur " << plWin << " as gagné" << endl;
      break;
    }
  }
  
  return 0;
}
