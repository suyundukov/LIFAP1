/**
 * Afficher les nombres pairs entre 0 et 20 en utilisant une boucle POUR
 */
#include <iostream>

int main()
{
  int i;

  for (i = 0; i <= 20; i += 2)
    std::cout << i << " " << std::flush;

  std::cout << std::endl;

  return 0;
}
