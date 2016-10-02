/* Calculer la moyenne de 2 valeurs réelles */
#include <iostream>

using namespace std;

int main()
{
  float a;
  float b;

  cout << "Donne moi premier chiffre : ";
  cin >> a;
  cout << "Donne moi deuxième chiffre : ";
  cin >> b;

  cout << "La moyenne de " << a << " et " << b << " est " << (a + b) / 2;
  
  cout << endl;
  return 0;
}
