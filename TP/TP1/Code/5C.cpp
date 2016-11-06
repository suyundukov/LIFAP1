/* Afficher un triangle de hauteur N ; N étant demandé à USER */
#include <iostream>

int main()
{
  int a;
  
  std::cout << "Quelle est la hauteur de triangle ?" << std::endl;
  std::cin >> a;
  
  for (int i = 0; i < a; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << "*" << std::flush;
    }
    std::cout << std::endl;
  }
  
  return 0;
}
