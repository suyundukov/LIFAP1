/* Calculer la moyenne de 2 valeurs réelles */
#include <iostream>

int main()
{
  float a;
  float b;

  std::cout << "Donne moi premier chiffre : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi deuxième chiffre : " << std::flush;
  std::cin >> b;

  std::cout << "La moyenne de " << a << " et " << b << " est "
            << (a + b) / 2 << std::endl;
  
  return 0;
}
