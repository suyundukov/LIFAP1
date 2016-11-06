/* Saisir une valeur entre deux bornes choisies par l’utilisateur */
#include <iostream>

int main()
{
  int a;

  do {
    std::cout << "Donner une valeur entre 1 et 10 : " << std::flush;
    std::cin >> a;
  } while ((a < 0) || (a > 10));

  std::cout << "Tout est OK !" << std::endl;
  
  return 0;
}
