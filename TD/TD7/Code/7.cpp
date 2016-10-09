/* Remplir un tableau avec les coefficients du triangle de Pascal */
#include "sunlib.h" // Contient la fonction combin()
#include <iostream>

using namespace std;

const int MAX = 100;

/* Procédure */

void trianglePascal(int tab[MAX][MAX], int n)
{
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      tab[i][j] = combin(i, j);
    }
  }
}

/* Utilisation */

int main()
{
  int tab[MAX][MAX];
  
  trianglePascal(tab, 6);
  
  // Affichage de ce tableau
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << tab[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
