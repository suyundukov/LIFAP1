/* Afficher N étoiles sur une ligne. N étant demandé à USER */
#include <iostream>

int main()
{
  int a;
  
  std::cout << "Combien des étoiles tu veux voir ?" << std::endl;
  std::cin >> a;
  
  for (int i = 0; i < a; ++i) {
    std::cout << "*" << std::flush;
  }
  
  std::cout << std::endl;
  return 0;
}
