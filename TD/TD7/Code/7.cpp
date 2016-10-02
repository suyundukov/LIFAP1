/* Remplir un tableau avec les coefficients du triangle de Pascal */
#include "sunlib.h" // Contient la fonction combin()
#include <iostream>

using namespace std;

/* Procédure */

void trianglePascal(int n) //FIXME: Passage de tableau dans les parametres
{
  int tab[n][n];
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      tab[i][j] = combin(i, j);
    }
  }
  
  // Affichage de ce tableau
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << tab[i][j] << "\t";
    }
    cout << endl;
  }
}

/* Utilisation */

int main()
{
  trianglePascal(6);
  
  return 0;
}
