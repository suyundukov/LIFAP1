/**
 * Remplir le tableau avec le résultat du produit de la ligne par colonne
 */
#include <iostream>

const int MAX = 100;

/* Procédure */

void tableMultip(int tab[MAX][MAX], int n)
{
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < i + 1; ++j)
      tab[i][j] = i * j;
}

/* Utilisation */

int main()
{
  int tab[MAX][MAX];
  
  tableMultip(tab, 5);
  
  // Afichage de ce tableau
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < i + 1; ++j)
      std::cout << tab[i][j] << " " << std::flush;
    std::cout << std::endl;
  }
  
  return 0;
}
