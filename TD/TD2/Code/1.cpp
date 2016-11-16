/**
 * Calculer la somme des N première puissances de 2
 */
#include <cmath> // Contient la fonction pow()
#include <iostream>

int main()
{
  int a;
  int b;

  b = 0;

  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;

  for (int i = 0; i < a; ++i)
    b += pow(2, i);

  std::cout << b << std::endl;

  return 0;
}
