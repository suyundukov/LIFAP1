/**
 * Remplir un tableau de notes, quantité des notes est demandée à USER
 */
#include <iostream>

/* Procédure */

void remplirTableau(float tab[], int n)
{
  for (int i = 0; i < n; ++i) {
    std::cout << "Donne moi une valeur pour la case "
      << i + 1 << " : " << std::flush;
    std::cin >> tab[i];
  }
}

/* Utilisation */

int main()
{
  float tab[5];
  
  remplirTableau(tab, 5);
  
  std::cout << std::endl;

  return 0;
}
