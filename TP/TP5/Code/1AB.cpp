/* Saisir et afficher une chaîne de caractères */
#include <iostream>

const int CHMAX = 100;

int main()
{
  char c[CHMAX] = "";

  std::cout << "Donne moi une chaîne de caractère : " << std::flush;
  std::cin >> c;
  
  std::cout << c << std::endl;
  
  return 0;
}
