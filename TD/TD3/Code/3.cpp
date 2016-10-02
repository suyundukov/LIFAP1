/* Afficher les dix nombres suivants la valeur N donnée en paramètre */
#include <iostream>

using namespace std;

void affiche(int a)
{
  for (int i = 0; i < 10; ++i) {
    cout << a << " ";
    ++a;
  }
}

int main()
{
  int a;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  
  affiche(a);
  
  cout << endl;
  
  return 0;
}
