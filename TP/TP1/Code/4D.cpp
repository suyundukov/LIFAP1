/* Afficher la table de multiplication d’un entier choisi par USER */
#include <iostream>

int main()
{
  int a;

  std::cout << "Donne moi un chiffre : " << std::flush;
  std::cin >> a;

  for (int i = 1; i < 11 ; ++i) {
    std::cout << a << " * " << i << " = " << a * i << std::flush;
  }
  
  std::cout << std::endl;
  return 0;
}
