/* Afficher la table de multiplication d’un entier choisi par USER */
#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "Donne moi un chiffre : ";
  cin >> a;

  for (int i = 1; i < 11 ; ++i) {
    cout << a << " * " << i << " = " << a*i;
  }
  
  cout << endl;
  return 0;
}
