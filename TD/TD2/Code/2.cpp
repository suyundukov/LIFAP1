/* Calculer la somme des N premiers nombres impairs */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  
  b = 0;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  
  for (int i = 1; i < 2 * a; i += 2) {
    b += i;
  }
  
  cout << b << endl;
  
  return 0;
}
