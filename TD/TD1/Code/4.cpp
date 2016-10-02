/* Demander un entier entre les bornes imposées */
#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "Donne moi un entier entre 1 et 31 : ";
  cin >> a;

  while (a < 1 || a > 31) {
    cout << "Donne moi un entier ENTRE 1 et 31 : ";
    cin >> a;
  }

  cout << "Tout est OK !\n";
  return 0;
}
