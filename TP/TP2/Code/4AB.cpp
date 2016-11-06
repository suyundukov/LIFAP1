/* Afficher le triangle de Pascal */
#include "sunlib.hpp"
#include <iostream>

/* Procédure */

void trianglePascal(int n)
{
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      std::cout << combin(i, j) << " " << std::flush;
    }
    std::cout << std::endl;
  }
}

/* Utilisation */

int main()
{
  trianglePascal(4);
  
  return 0;
}
