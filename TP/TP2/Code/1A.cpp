/* Retourner le maximum de deux réels */
#include <iostream>

/* Fonction */

float max_ret(float a, float b)
{
  if (a > b)
    return a;
  else
    return b;
}

/* Utilisation */

int main()
{
  float a;
  float b;

  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi une autre valeur : " << std::flush;
  std::cin >> b;

  std::cout << "La valeur la plus grande est : " << max_ret(a, b) << std::endl;

  return 0;
}
