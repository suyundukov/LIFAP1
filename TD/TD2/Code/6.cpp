/* Calculer la somme des chiffres qui composent un nombre */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  
  b = 0;
  
  cout << "Donnes moi un chiffre : ";
  cin >> a;
  
  while (a > 0) {
    b += a % 10;
    a /= 10;
  }
  
  cout << "La somme des chiffres est " << b + a << endl;
  
  return 0;
}
