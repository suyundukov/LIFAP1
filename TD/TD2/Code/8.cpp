/**
 * Trouver une valeur choisie aléatoirement par le programme
 */
#include <cstdlib> // Contient la fonction rand()
#include <iostream>

int main() 
{
  int a;
  int b;
  int c;

  a = rand() % 100 + 1; // Utilisez % pour donner les limites (hack)
  b = 0;

  do {
    std::cout << "Donne moi une valeur : " << std::flush;
    std::cin >> c;

    if (c > a)
      std::cout << "C'est trop" << std::endl;
    else if (c < a)
      std::cout << "C'est pas assez" << std::endl;

    b++;
  } while (((c < a) || (c >a)) && (b < 6));

  if (c == a)
    std::cout << "Gagné" << std::endl;
  else
    std::cout << "Perdu" << std::endl;

  return 0;
}
