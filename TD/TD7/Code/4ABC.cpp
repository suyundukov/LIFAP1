/* 1. Fonction -> Calculer la somme d'une ligne */
/* 2. Fonction -> Calculer la somme d'une colonne */
/* 3. Fonction -> Calculer la somme de deux diagonales */
#include <iostream>

using namespace std;

/* Fonction 1 */

float sommeLigne(float tab[5][5], int n)
{
  int som;
  
  som = 0;
  
  for (int i = 0; i < 5; ++i) {
    som += tab[n][i];
  }
  
  return som;
}

/* Fonction 2 */

float sommeColonne(float tab[5][5], int n)
{
  int som;
  
  som = 0;
  
  for (int i = 0; i < 5; ++i) {
    som += tab[i][n];
  }
  
  return som;
}

/* Fonction 3 */

float sommeDiagonale(float tab[5][5], int n, int &som1)
{
  int som;
  
  som = 0;
  som1 = 0;
  
  for (int i = 0; i < 5; ++i) {
    som += tab[i][i];
    som1 += tab[i][4 - i];
  }
  
  return som;
}

/* Utilisation */

int main()
{
  int n;
  int som1; // Somme de la deuxième diagonale
  float tab[5][5] = { {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5} };
  
  n = 3;
  
  // Somme des éléments de ligne
  cout << "La somme des éléments de cette ligne est "
  << sommeLigne(tab, n) << endl;
  
  // Somme des éléments de colonne
  cout << "La somme des éléments de cette colonne est "
  << sommeColonne(tab, n) << endl;
  
  //Somme des éléments des diagonales
  cout << "La somme des éléments de la première diagonale est "
  << sommeDiagonale(tab, n, som1) << " et de la deuxième diagonale est "
  << som1 << endl;
  
  return 0;
}
