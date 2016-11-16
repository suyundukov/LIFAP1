/**
 * Afficher les dix nombres suivants la valeur N donnée en paramètre
 */
#include <iostream>

void affiche(int a)
{
  for (int i = 0; i < 10; ++i) {
    std::cout << a << " " << std::flush;
    ++a;
  }
}

int main()
{
  int a;
  
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;
  
  affiche(a);
  
  std::cout << std::endl;
  
  return 0;
}
