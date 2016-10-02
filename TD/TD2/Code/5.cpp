/* Tester si un entier choisi par USER est multiple de 5 ou de 7 */
#include <iostream>

using namespace std;

int main()
{
  int a;
  
  cout << "Donne une valeur : ";
  cin >> a;
  
  if (a % 5 == 0 && a % 7 == 0) {
    cout << a << " est multiple de 5 et de 7";
  } else if (a % 5 == 0) {
    cout << a << " est multiple de 5";
  } else if (a % 7 == 0) {
    cout << a << " est multiple de 7";
  } else {
    cout << "C'est ni l'un ni l'autre";
  }
  
  cout << endl;
  
  return 0;
}
