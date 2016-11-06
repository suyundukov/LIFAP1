/* Afficher une ligne de longueur N, alternant les étoiles et les espaces */
#include <iostream>

int main()
{
  int n;
  
  std::cout << "Quelle est la longueur de la ligne ?" << std::endl;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0)
      std::cout << "*" << std::flush;
    else
      std::cout << " " << std::flush;
  }

  std::cout << std::endl;
  return 0;
}
