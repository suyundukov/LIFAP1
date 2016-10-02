/* Remplir un tableau de taille 5 x 5, remplir par USER */
#include <iostream>

using namespace std;

/* Procédure */

void remplirTab(float tab[5][5])
{
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << "Donne moi une valeur pour tab [" << i << "]" << "["
      << j << "] : ";
      cin >> tab[i][j];
    }
  }
}

/* Utilisation */

int main()
{
  float tab[5][5];
  
  remplirTab(tab);
  
  return 0;
}
