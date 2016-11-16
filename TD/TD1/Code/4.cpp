/**
 * Demander un entier entre les bornes imposées
 */
#include <iostream>

int main()
{
  int a;

  std::cout << "Donne moi un entier entre 1 et 31 : " << std::flush;
  std::cin >> a;

  while (a < 1 || a > 31) {
    std::cout << "Donne moi un entier ENTRE 1 et 31 : " << std::flush;
    std::cin >> a;
  }

  std::cout << "Tout est OK !" << std::endl;

  return 0;
}
