/* Calculer et afficher le carré de nombre demandé à USER */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;

  cout << "Donne moi une valeur : ";
  cin >> a;

  b = a * a;

  cout << "Le carré de " << a << " est " << b << endl;
  return 0;
}
