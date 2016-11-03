/* Calculer et retourner les N premiers termes de la suite */
#include <iostream>

/* Procédure */

void suite(float tab[], int n)
{
  tab[0] = 1;
  
  for (int i = 1; i < n - 1; ++i) {
    tab[i] = tab[i - 1] / i;
  }
}

/* Utilisation */

int main()
{
  float tab[6] = {};
  
  suite(tab, 6);
  
  for (int i = 0; i < 6; ++i) {
    std::cout << tab[i] << " " << std::flush;
  }
  
  std::cout << std::endl;
  return 0;
}
