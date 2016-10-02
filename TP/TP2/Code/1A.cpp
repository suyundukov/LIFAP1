/* Retourner le maximum de deux réels */
#include <iostream>

using namespace std;

/* Fonction */

float max_ret(float a, float b)
{
  if (a > b)
    return a;
  else
    return b;
}

/* Utilisation */

int main()
{
  float a;
  float b;

  cout << "Donne moi une valeur : ";
  cin >> a;
  cout << "Donne moi une autre valeur : ";
  cin >> b;

  cout << "La valeur la plus grande est : " << max_ret(a, b) << endl;
  return 0;
}
