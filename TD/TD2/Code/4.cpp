/* Calculer la moyenne de N valeurs saisie par USER */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  int c;
 
  c = 0;

  cout << "Donne moi le nombre de valeurs : ";
  cin >> a;

  for (int i = 0; i < a; ++i) {
    cout << "Donne moi une valeur : ";
    cin >> b;
    c += b;
  }

  cout << "La moyenne est : " << c / b << endl;

  return 0;
}
