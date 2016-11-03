/* Dessiner un carré de côté N à l'écran */
#include <iostream>

void dessin(int a, char c)
{
  for (int i = 1; i <= a; ++i) {
    for (int j = 1; j <= a; ++j) {
      if (i == 1 || i == a || j == 1 || j == a) {
        std::cout << c << std::flush;
      } else {
        std::cout << " " << std::flush;;
      }
    }
    std::cout << std::endl;
  }
}

int main ()
{
  int a;
  char c;
  
  std::cout << "Donne moi une valeur : ";
  std::cin >> a;
  std::cout << "Donne moi un caractere : ";
  std::cin >> c;
  
  dessin(a, c);
  
  return 0;
}
