/**
 * Informer si le produit est poitif, négatif ou nul, sans le calculer
 */
#include <iostream>

int main()
{
  int a;
  int b;

  std::cout << "Donne moi premier entier : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi deuxième entier : " << std::flush;
  std::cin >> b;

  if ((a < 0 && b < 0) || (a > 0 && b > 0))
    std::cout << "Le produit est positif !" << std::endl;
  else if (a == 0 || b == 0)
    std::cout << "Le produit est nul !" << std::endl;
  else
    std::cout << "Le produit est négatif !" << std::endl;

  return 0;
}
