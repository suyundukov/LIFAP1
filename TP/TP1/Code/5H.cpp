/* Afficher un damier de taille N * M */
#include <iostream>

int main()
{
  int n;
  int m;
  
  std::cout << "Quelle est la longueur de la ligne ?" << std::endl;
  std::cin >> n;
	std::cout << "Quelle est la hauteur du rectangle ?" << std::endl;
  std::cin >> m;
  
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
        std::cout << "*" << std::flush;
      else
        std::cout << " " << std::flush;
    }
    std::cout << std::endl;
  }

  return 0;
}
