/* Afficher N en enversant l'ordre des chiffres. N est saisi par USER */
#include <iostream>

using namespace std;

int main()
{
  int n;
  int temp;
  
  cout << "Donne moi une valeur : ";
  cin >> n;
  
  while (n > 0) {
    temp = n % 10;
    n /= 10;
    cout << temp;
  }
  
  cout << endl;
  return 0;
}
