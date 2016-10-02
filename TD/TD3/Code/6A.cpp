/* Retourner VRAI si N est parfait, faux sinon */
#include <iostream>

using namespace std;

bool parf(int a)
{
  int somme;
  
  somme = 0;
  
  for (int i = 1; i < a; ++i) {
    if ((a % i) == 0) {
      somme += i;
    }
  }
  
  if (somme == a) {
    return true;
  } else {
    return false;
  }
}

int main()
{
  int a;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  
  if (parf(a)) {
    cout << a << " est un nombre parfait.\n";
  } else {
    cout << a << " n'est pas un nombre parfait.\n";
  }
  
  return 0;
}
