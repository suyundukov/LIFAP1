/* Remplir deuxième tableau avec la somme des colonnes du 1ère tableau */
#include <iostream>

/* Procédure */

void remplirTab(float tab[6][6], float tab1[6], int c, int l)
{
  int som;
  
  for (int i = 0; i < l; ++i) {
    som = 0;
    for (int j = 0; j < c; ++j) {
      som += tab[j][i];
    }
    tab1[i] = som;
  }
}

/* Utilisation */

int main()
{
  int c;
  int l;
  float tab[6][6] = { {1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5},
    {}, {}, {}, {} };
  float tab1[6] = {};
  
  c = 2;
  l = 5;
  
  remplirTab(tab, tab1, c, l);
  
  return 0;
}
