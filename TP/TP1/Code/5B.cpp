/* Afficher un rectangle de N * M étoiles. N et M étant demandés à USER */
#include <iostream>

int main()
{
  int a;
  int b;
  
  std::cout << "Donne moi les dimensions du rectangle" << std::endl;
  std::cout << "Longueur : " << std::flush;
  std::cin >> a;
  std::cout << "Largeur : " << std::flush;
  std::cin >> b;
  
  for (int i = 0; i < b; ++i) {
    for (int j = 0; j < a; ++j) {
      std::cout << "*" << std::flush;
    }
    std::cout << std::endl;
  }
  
  return 0;
}
