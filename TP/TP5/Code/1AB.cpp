/* Saisir et afficher une chaîne de caractères */
#include <iostream>

using namespace std;

const int CHMAX = 100;

int main()
{
  char c[CHMAX] = "";

  cout << "Donne moi une chaîne de caractère : ";
  cin >> c;
  
  cout << c;
  
  cout << endl;
  return 0;
}
