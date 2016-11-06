/* Afficher une ligne de longueur N, avec deux étoiles, et N - 2 espaces */
#include <iostream>

int main()
{
  int n;
  
  std::cout << "Quelle est la longueur de la ligne ?" << std::endl;
  std::cin >> n;
  
  for (int i = 0; i < n; ++i) {
    if (i == 0 || i == n - 1)
      std::cout << "*" << std::flush;
    else
      std::cout << " " << std::flush;
  }
  
  std::cout << std::endl;
  return 0;
}
