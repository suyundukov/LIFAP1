/* 1. Procédure -> Afficher le tableau ligne par ligne */
/* 2. Procédure -> Afficher le tableau colonne par colonne */
#include <iostream>

using namespace std;

/* Procédure 1 */

void affParLigne(float tab[5][5])
{
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      std::cout << tab[i][j] << " " << std::flush;
    }
    std::cout << std::endl;
  }
}

/* Procédure 2 */

void affParColonne(float tab[5][5])
{
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      std::cout << tab[j][i] << " " << std::flush;
    }
    std::cout << std::endl;
  }
}

/* Utilisation */

int main()
{
  float tab[5][5] = { 
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5} };
  
  std::cout << "Affichage ligne par ligne" << std::endl;
  affParLigne(tab); // Affichage ligne par ligne
  
  std::cout << "Affichage colonne par colonne" << std::endl;
  affParColonne(tab); // Affichage colonne par colonne
  
  return 0;
}
