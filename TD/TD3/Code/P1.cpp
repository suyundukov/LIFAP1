/**
 * Dessiner le motif donné
 */
#include <iostream>

void dessin(int lngr, int rep)
{
  for (int i = 0; i < rep; ++i)
    for (int j = 1; j <= lngr; ++j) {
      for (int k = 0; k < j; ++k)
        std::cout << "*" << std::flush;
      std::cout << std::endl;
    }
}

int main()
{
  int lngr;
  int rep;

  std::cout << "Donne moi la longueur du motif : " << std::flush;
  std::cin >> lngr;
  std::cout << "Donne moi le nombre de répétition : " << std::flush;
  std::cin >> rep;

  dessin(lngr, rep);

  return 0;
}
