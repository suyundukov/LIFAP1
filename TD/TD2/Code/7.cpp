/* Calculer les racines rééles d'un polymer du second degré */
#include <cmath> // Contient la fonction sqrt()
#include <iostream>

using namespace std;

int main() 
{
  float a;
  float b;
  float c;
  float d;
  float e;
  float f;

  cout << "Donne moi trois chiffres :\n";
  cin >> a >> b >> c;

  d = b * b - 4 * a * c;

  if (d < 0) {
    cout << "Pas de racines réelles";
  } else if (d == 0) {
    e = -b / (2 * a);
    cout << "Une racine double : " << e;
  } else {
    e = (-b + sqrt(d)) / (2 * a);
    f = (-b - sqrt(d)) / (2 * a);
    cout << e << " " << f;
  }

  cout << endl;
  return 0;
}
