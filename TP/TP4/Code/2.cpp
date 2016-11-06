/* Trier un tableau de 10 entiers en utilisant le tri par comptage */
#include <iostream>

const int SIZE = 10;

/* Proc?ure */

void compter(int tab[SIZE], int tab1[SIZE])
{
  int indice; // Utiliser dans le tableau r?ultat
  int nmbr;
  int tabComptage[SIZE] = {};

  indice = 0;

  // Tableau de comptage
  for (int i = 0; i < SIZE; ++i) {
    nmbr = 0;
    for (int j = 0; j < SIZE; ++j)
      if (tab[i] > tab[j])
        nmbr += 1;
    tabComptage[i] = nmbr;
  }

  // Tableau r?ultat
  for (int i = 0; i < SIZE; ++i) {
    for (int j = 0; j < SIZE; ++j)
      if (tabComptage[j] == i)
        indice = j;
    tab1[i] = tab[indice];
  }
}

/* Utilisation */

int main()
{
  int tab[SIZE] = {52, 10, 1, 25, 62, 3, 8, 55, 66, 99};
  int tab1[SIZE] = {};

  compter(tab, tab1);

  for (int i = 0; i < SIZE; ++i)
    std::cout << tab1[i] << "\t" << std::flush;

  std::cout << std::endl;
  return 0;
}
