/* Transformer un entier positif en un nombre de semaines et de jours */
#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "Donne moi un chiffre : ";
  cin >> a;

  cout << a << " => " << a / 7 << " semaines et " << a % 7 << " jours.";
  
  cout << endl;
  return 0;
}
