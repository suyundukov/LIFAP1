/* Programmer une calculatrice proposant les opérations classiques */
#include <iostream>

int main()
{
  int a;
  int b;
  char c;
  
  std::cout << "Saisi une valeur : " << std::flush;
  std::cin >> a;
  std::cout << "Saisi une deuxième valeur : " << std::flush;
  std::cin >> b;
  std::cout << "Choisi un operateur parmi : '+' , '-' , '*' et '/' " << std::flush;
  std::cin >> c;
  
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
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    break;
  default:
    std::cout << "Unknown error !" << std::endl;
  }
  
  return 0;
}
