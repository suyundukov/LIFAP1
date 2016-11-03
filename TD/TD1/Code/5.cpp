/* Afficher la table de multiplication d'un entier */
#include <iostream>

int main()
{
  int a;

  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;

  for (int i = 0; i <= 10; ++i) {
    std::cout << a << " * " << i << " = " << a * i << std::endl;
  }

  return 0;
}
