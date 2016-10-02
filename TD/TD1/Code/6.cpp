/* Simuler le fonctionnement d'une calculatrice simple */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  char c;

  cout << "Donne moi première valeur : ";
  cin >> a;
  cout << "Choisi un operateur parmi : ' + ', ' - ', ' * ' et ' / ' : ";
  cin >> c;
  cout << "Donne moi deuxième valeur : ";
  cin >> b;

  switch (c) {
  case '+':
    cout << a << " + " << b << " = " << a + b << endl;
    break;
  case '-':
    cout << a << " - " << b << " = " << a - b << endl;
    break;
  case '*':
    cout << a << " * " << b << " = " << a * b << endl;
    break;
  case '/':
    if (b == 0) {
      cout << "Operation impossible !\n";
    } else {
      cout << a << " / " << b << " = " << a / b << endl;
    }
    break;
  default:
    cout << "Unknown error !\n";
    break;
  }

  return 0;
}
