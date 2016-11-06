/* Procédure -> Remplir le tableau passé en paramètre */
/* Procédure -> Afficher le tableau passé en paramètre */
#include <iostream>

const int SIZE = 100;

/* Procédure 1 */

void tabRemplir(int tab[SIZE][SIZE], int tL, int tC)
{
  for (int i = 0; i < tL; ++i)
    for (int j = 0; j < tC; ++j) {
      std::cout << "Donne moi une valeur pour tab[" << i
                << "][" << j << "] : " << std::flush;
      std::cin >> tab[i][j];
    }
}

/* Procédure 2 */

void tabAffiche(int tab[SIZE][SIZE], int tL, int tC)
{
  for (int i = 0; i < tL; ++i) {
    for (int j = 0; j < tC; ++j)
      std::cout << tab[i][j] << "\t" << std::flush;
    std::cout << std::endl;
  }
}

/* Utilisation */

int main()
{
  int tC;
  int tL;
  int tab[SIZE][SIZE] = {};
  
  std::cout << "Donne moi le nombre de ligne : " << std::flush;
  std::cin >> tL;
  std::cout << "Donne moi le nombre de colonne : " << std::flush;
  std::cin >> tC;
  
  tabRemplir(tab, tL, tC);
  
  tabAffiche(tab, tL, tC);
  
  return 0;
}
