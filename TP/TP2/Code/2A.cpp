/* Obtenir une valeur aléatoire comprise entre 1 et 30. Puis entre 15 et 25 */
#include <cstdlib> // Contient la fonction rand()
#include <ctime> // Contient la fonction srand()
#include <iostream>

int main()
{
  int a;

  srand(time(NULL));
  
  //a = (rand() % 30) + 1;  // Les bornes entre 1 et 30
  a = (rand() % 15) + 10;  // Les bornes entre 15 et 25

  std::cout << "La valeur aleatoire est : " << a << std::endl;

  return 0;
}
