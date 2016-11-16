/**
 * Retourner l'indice de la plus petite valeur contenue dans le tableau
 */
#include <iostream>

/* Procédure */

float rechercheMin(float tab[], int n)
{
  int index;
  float min;
  index = 0;
  min = tab[0];

  for (int i = 0; i < n; ++i)
    if (tab[i] < min) {
      min = tab[i];
      index = i;
    }

  return index;
}

/* Utilisation */

int main()
{
  float tab[9] = {5, 18.5, 13.2, 8.75, 2, 15, 13.5, 6, 17};

  std::cout << rechercheMin(tab, 9) << std::endl;

  return 0;
}
