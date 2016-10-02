/* Afficher la table de multiplication d'un entier */
#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "Donne moi une valeur : ";
  cin >> a;

  for (int i = 0; i <= 10; ++i) {
    cout << a << " * " << i << " = " << a * i << endl;
  }

  return 0;
}
