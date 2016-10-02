/* Remplir le tableau avec le résultat du produit de la ligne par colonne */
#include <iostream>

using namespace std;

/* Procédure */

void tableMultip(int n) //FIXME: Passage de tableau dans les parametres
{
  int tab[n][n];
  
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      tab[i][j] = i * j;
    }
  }
  
  // Afichage de ce tableau
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << tab[i][j] << " ";
    }
    cout << endl;
  }
}

/* Utilisation */

int main()
{
  tableMultip(5);
  
  return 0;
}
