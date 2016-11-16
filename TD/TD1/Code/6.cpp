/**
 * Simuler le fonctionnement d'une calculatrice simple
 */
#include <iostream>

int main()
{
  int a;
  int b;
  char c;

  std::cout << "Donne moi première valeur : " << std::flush;
  std::cin >> a;
  std::cout << "Choisi un operateur parmi : + , - , * et / : " << std::flush;
  std::cin >> c;
  std::cout << "Donne moi deuxième valeur : " << std::flush;
  std::cin >> b;

  switch (c) {
  case '+':
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    break;
  case '-':
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    break;
  case '*':
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    break;
  case '/':
    if (b == 0)
      std::cout << "Operation impossible !" << std::endl;
    else
      std::cout << a << " / " << b << " = " << a / b << std::endl;
    break;
  default:
    std::cout << "Unknown error !" << std::endl;;
    break;
  }

  return 0;
}
