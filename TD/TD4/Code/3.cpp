/* Effectuer la division euclidienne de deux entiers */
#include <iostream>

using namespace std;

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
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  cout << "Donne moi une valeur : ";
  cin >> b;
  
  divisEuclid(a, b, q, r);
  
  cout << "La division euclidienne de ces deux valeurs donne un quotient de "
  << q << " et un reste de " << r << endl;
  
  return 0;
}
