/* Vérifier si un entier est premier ou non */
#include <cmath>
#include <iostream>

using namespace std;

int main() 
{
  int a;
  bool b;

  b = true;

  cout << "Donnes un entier : ";
  cin >> a;

  for (int i = 2; i < sqrt(a); ++i) {
    if (a % i == 0) {
      b = false;
    }
  }

  if (b) {
    cout << a << " est un nombre premier.\n";
  } else {
    cout << a << " n'est pas un nombre premier.\n";
  }

  return 0;
}
