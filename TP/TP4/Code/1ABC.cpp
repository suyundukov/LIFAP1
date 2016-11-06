/* 1. Procédure -> Demander à USER de remplir le tableau */
/* 2. Procédure -> Afficher le tableau */
#include <iostream>

const int SIZE = 100;

/* Procédure */

void tabRemplir(int tab[SIZE], int tailleT)
{
  for (int i = 0; i < tailleT; ++i) {
    std::cout << "Donne moi une valeur pour la case " 
              << i + 1 << " : " << std::flush;
    std::cin >> tab[i];
  }
}

/* Procédure */

void tabAff(int tab[SIZE], int tailleT)
{
  for (int i = 0; i < tailleT; ++i)
    std::cout << tab[i] << "\t" << std::flush;
}

/* Utilisation */

int main()
{
  int tab[SIZE] = {};
  
  tabRemplir(tab, 6);
  
  tabAff(tab, 6);
  
  std::cout << std::endl;

  return 0;
}
