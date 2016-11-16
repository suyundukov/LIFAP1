/**
 * Afficher la valeur (X / 2), si X est pair; sinon afficher (3 * X + 1)
 */
#include <iostream>

int main()
{
  int a;

  for (int i = 0; i < 20; ++i) {
    std::cout << "Donne moi une valeur : " << std::flush;
    std::cin >> a;

    if (a % 2 == 0)
      a /= 2;
    else
      a = a * 3 + 1;

    std::cout << a << std::endl;
  }

  return 0;
}
