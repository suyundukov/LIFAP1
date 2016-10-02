/* Afficher la liste des nombres parfait compris entre 1 et 10 000 */
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
  for (int i = 1; i < 10000; ++i) {
    if (parf(i)) {
      cout << i << "\n";
    }
  }
  
  return 0;
}
