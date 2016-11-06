/* Transformer un entier positif en un nombre de semaines et de jours */
#include <iostream>

int main()
{
  int a;

  std::cout << "Donne moi un chiffre : " << std::flush;
  std::cin >> a;

  std::cout << a << " => " << a / 7 << " semaines et " 
            << a % 7 << " jours." << std::endl;
  
  return 0;
}
