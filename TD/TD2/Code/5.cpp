/**
 * Tester si un entier choisi par USER est multiple de 5 ou de 7
 */
#include <iostream>

int main()
{
  int a;

  std::cout << "Donne une valeur : " << std::flush;
  std::cin >> a;

  if (a % 5 == 0 && a % 7 == 0)
    std::cout << a << " est multiple de 5 et de 7" << std::endl;
  else if (a % 5 == 0)
    std::cout << a << " est multiple de 5" << std::endl;
  else if (a % 7 == 0)
    std::cout << a << " est multiple de 7" << std::endl;
  else
    std::cout << "C'est ni l'un ni l'autre" << std::endl;

  return 0;
}
