/* Calculer la moyenne de N valeurs saisie par USER */
#include <iostream>

int main()
{
  int a;
  int b;
  int c;
 
  c = 0;

  std::cout << "Donne moi le nombre de valeurs : " << std::flush;
  std::cin >> a;

  for (int i = 0; i < a; ++i) {
    std::cout << "Donne moi une valeur : " << std::flush;
    std::cin >> b;
    c += b;
  }

  std::cout << "La moyenne est : " << c / b << std::endl;

  return 0;
}
