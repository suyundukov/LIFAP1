/* Afficher la plus petite de deux valeurs */
#include <iostream>

int main()
{
  int a;
  int b;

  std::cout << "Donne moi un chiffre : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi un autre chiffre : " << std::flush;
  std::cin >> b;

  if (a < b) {
    std::cout << "La plus petite est : " << a << std::endl;
  } else if (a > b) {
    std::cout << "La plus petite est : " << b << std::endl;
  } else {
    std::cout << "Ils sont identiques !" << std::endl;
  }
  
  return 0;
}
