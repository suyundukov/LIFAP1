/* Afficher le contour d'un rectangle de taille N * M */
#include <iostream>

int main()
{
  int n;
  int m;
  
  std::cout << "Quelle est la largeur du rectangle ?" << std::endl;
  std::cin >> n;
	std::cout << "Quelle est la hauteur du rectangle ?" << std::endl;
  std::cin >> m;
  
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
        std::cout << "*" << std::flush;
      else
        std::cout << " " << std::flush;
    }
    std::cout << std::endl;
  }

  return 0;
}
