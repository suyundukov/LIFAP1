/* Afficher la valeur (X / 2), si X est pair; sinon afficher (3 * X + 1) */
#include <iostream>

using namespace std;

int main()
{
  int a;

  for (int i = 0; i < 20; ++i) {
    cout << "Donne moi une valeur : ";
    cin >> a;
    
    if (a % 2 == 0) {
      a /= 2;
    } else {
      a = a * 3 + 1;
    }

    cout << a << endl;
  }

  return 0;
}
