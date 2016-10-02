/* Demander à USER et retourner une valeur entre 0 et 20 */
#include <iostream>

using namespace std;

int retour()
{
  int a;
  
  do {
    cout << "Donne moi une valeur entre 0 et 20 : ";
    cin >> a;
  } while ((a < 1) || (a > 20));
  
  return a;
}

int main()
{
  int a;
  
  a = retour();
  
  cout << endl;
  
  return 0;
}
