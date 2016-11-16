/**
 * Remplir un tableau avec les coefficients du triangle de Pascal
 */
#include "sunlib.hpp" // Contient la fonction combin()
#include <iostream>

const int MAX = 100;

/* Procédure */

void trianglePascal(int tab[MAX][MAX], int n)
{
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < i + 1; ++j)
      tab[i][j] = combin(i, j);
}

/* Utilisation */

int main()
{
  int tab[MAX][MAX];
  
  trianglePascal(tab, 6);
  
  // Affichage de ce tableau
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < i + 1; ++j)
      std::cout << tab[i][j] << "\t" << std::flush;
    std::cout << std::endl;
  }
  
  return 0;
}
