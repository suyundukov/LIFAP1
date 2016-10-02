/* Afficher la plus petite de deux valeurs */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;

  cout << "Donne moi un chiffre : ";
  cin >> a;
  cout << "Donne moi un autre chiffre : ";
  cin >> b;

  if (a < b) {
    cout << "La plus petite est : " << a;;
  } else if (a > b) {
    cout << "La plus petite est : " << b;
  } else {
    cout << "Ils sont identiques !";
  }
  
  cout << endl;
  return 0;
}
