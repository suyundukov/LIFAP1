/**
 * Vérifier si un entier est premier ou non
 */
#include <cmath>
#include <iostream>

int main() 
{
  int a;
  bool b;

  b = true;

  std::cout << "Donnes un entier : " << std::flush;
  std::cin >> a;

  for (int i = 2; i < sqrt(a); ++i)
    if (a % i == 0)
      b = false;

  if (b)
    std::cout << a << " est un nombre premier." << std::endl;
  else
    std::cout << a << " n'est pas un nombre premier." << std::endl;

  return 0;
}
