/* Saisir une valeur entre deux bornes choisies par l’utilisateur */
#include <iostream>

using namespace std;

int main()
{
  int a;

  do {
    cout << "Donner une valeur entre 1 et 10 : ";
    cin >> a;
  } while ((a < 0) || (a > 10));

  cout << "Tout est OK !";
  
  cout << endl;
  return 0;
}
