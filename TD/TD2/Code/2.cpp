/* Calculer la somme des N premiers nombres impairs */
#include <iostream>

int main()
{
  int a;
  int b;
  
  b = 0;
  
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;
  
  for (int i = 1; i < 2 * a; i += 2) {
    b += i;
  }
  
  std::cout << b << std::endl;
  
  return 0;
}
