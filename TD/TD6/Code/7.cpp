/* Remplacer les valeurs de chaque case par la somme des valeurs precedents */
#include <iostream>

/* Procédure */

void cumul(float tab[], int size)
{
  for (int i = 0; i < size; ++i) {
    tab[i] += tab[i - 1];
  }
}

/* Utilisation */

int main()
{
  float tab[9] = {12, 8, 5.5, 14, 13, 10.5, 7, 16, 9};
  
  cumul(tab, 9);
  
  for (int i = 0; i < 9; ++i) {
    std::cout << tab[i] << " " << std::flush;
  }
  
  std::cout << std::endl;
  return 0;
}
