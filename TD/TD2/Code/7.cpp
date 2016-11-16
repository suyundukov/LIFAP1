/**
 * Calculer les rastd::cines rééles d'un polymer du second degré
 */
#include <cmath> // Contient la fonction sqrt()
#include <iostream>

int main() 
{
  float a;
  float b;
  float c;
  float d;

  std::cout << "Donne moi trois chiffres : " << std::flush;
  std::cin >> a >> b >> c;

  d = b * b - 4 * a * c;

  if (d < 0)
    std::cout << "Pas de racines réelles" << std::endl;
  else if (d == 0)
    std::cout << "Une racine double : " << -b / (2 * a) << std::endl;
  else
    std::cout << (-b + sqrt(d)) / (2 * a) << " " 
        << (-b - sqrt(d)) / (2 * a) << std::endl;

  return 0;
}
