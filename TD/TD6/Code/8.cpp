/**
 * Remplir troisième tableau, qui contient la moyenne de deux premiers
 */
#include <iostream>

/* Procèdure */

void calcMoyTab(float tab[], float tab1[], float tab2[], int n)
{
  for (int i = 0; i < n; ++i)
    tab2[i] = (tab[i] + 2 * tab1[i]) / 3;
}

/* Utilisation */

int main()
{
  float tab[6] = {12, 8, 5.5, 14, 13, 10.5};
  float tab1[6] = {15, 3, 12, 17, 8, 10};
  float tab2[6] = {};

  calcMoyTab(tab, tab1, tab2, 6);

  for (int i = 0; i < 6; ++i)
    std::cout << tab2[i] << " " << std::flush;

  std::cout << std::endl;

  return 0;
}
