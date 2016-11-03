/* Déclarer et initialiser à 0 un tableau à 2 dimension */
#include <iostream>

int main() {
  int tab[5][5];
  
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      tab[i][j] = 0;
    }
  }
  
  std::cout << std::endl;
  return 0;
}
