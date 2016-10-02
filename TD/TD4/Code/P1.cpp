/* Calculer et retourner si existent les racines d'un polynôme du 2 degré */
#include <cmath>
#include <iostream>

using namespace std;

/* Procédure */

void racine(float a, float b, float c, float &x1, float &x2)
{
  float d;
  
  d = b * b - 4 * a * c;
  
  if (d > 0) {
    x1 = (-b - sqrt(d)) / (2 * a);
    x2 = (-b + sqrt(d)) / (2 * a);
  } else if (d == 0) {
    x1 = x2 = -b / (2 * a);
  } else {
    x1 = x2 = NAN;
  }
}

/* Utilisation */

int main()
{
  float x1;
  float x2;
  
  racine(3, 5, 7, x1, x2);
  
  cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << endl;
  return 0;
}
