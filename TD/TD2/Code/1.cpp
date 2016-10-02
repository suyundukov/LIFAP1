/* Calculer la somme des N première puissances de 2 */
#include <cmath> // Contient la fonction pow()
#include <iostream>

using namespace std;

int main()
{
  int a, i;
  int b = 0;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  
  for (i = 0; i < a; ++i) {
    b += pow(2, i);
  }
  
  cout << b << endl;
  
  return 0;
}
