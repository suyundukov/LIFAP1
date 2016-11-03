/* Afficher les valeurs contenues dans le tableau */
#include <iostream>

/* Procédure */

void afficheTableau(float tab[], int n)
{
  tab[n] = {};
  
  for (int i = 0; i < n; ++i) {
    std::cout << tab[i] << " | " << std::flush;
  }
}

/* Utilisation */

int main()
{
  float tab[9] = {12, 18.5, 13.2, 8.75, 16, 15, 13.5, 12, 17};
  
  afficheTableau(tab, 9);
  
  std::cout << std::endl;
  return 0;
}
