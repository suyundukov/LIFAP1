/* Afficher les nombres pairs entre 0 et 20 en utilisant une boucle TANT QUE */
#include <iostream>

int main()
{
  int i = 0;

  while (i <= 20) {
    std::cout << i << " " << std::flush;
    i += 2;
  }

  std::cout << std::endl;
  return 0;
}
