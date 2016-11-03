/* Calculer et afficher le carré de nombre demandé à USER */
#include <iostream>

int main()
{
  int a;
  int b;

  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;

  b = a * a;

  std::cout << "Le carré de " << a << " est " << b << std::endl;
  return 0;
}
