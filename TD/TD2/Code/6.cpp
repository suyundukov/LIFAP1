/* Calculer la somme des chiffres qui composent un nombre */
#include <iostream>

int main()
{
  int a;
  int b;
  
  b = 0;
  
  std::cout << "Donnes moi un chiffre : " << std::flush;
  std::cin >> a;
  
  while (a != 0) {
    b += a % 10;
    a /= 10;
  }
  
  std::cout << "La somme des chiffres est " << b << std::endl;
  
  return 0;
}
