/* Effectuer la division euclidienne de deux entiers */
#include <iostream>

/* Procédure */

void divisEuclid(int a, int b, int &q, int &r)
{
  q = 0;
  r = a;
  
  while (r >= b) {
    q += 1;
    r -= b;
  }
}

/* Utilisation */

int main()
{
  int a;
  int b;
  int q;
  int r;
  
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> b;
  
  divisEuclid(a, b, q, r);
  
  std::cout << "La division euclidienne de ces deux valeurs donne un quotient de " << q << " et un reste de " << r << std::endl;
  
  return 0;
}
