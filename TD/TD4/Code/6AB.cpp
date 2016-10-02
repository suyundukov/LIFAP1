/* 1. Sous-programme -> Calculer la somme des diviseurs et leur produit */
/* 2. Fonction -> Retourner VRAI, si entier est un doublon, FAUX sinon */
#include <iostream>

using namespace std;

/* Procédure */

void sommeProduit(int n, int &som, int &prod)
{
  som = 0;
  prod = 0;
  
  for (int i = 1; i <= n; ++i) {
    if (n % i == 0) {
      som += i;
      prod += i;
    }
  }
}

/* Fonction */

bool verifieDoublon(int n)
{
  int som;
  int prod;
  
  sommeProduit(n, som, prod);
  
  if (prod % som == 0) {
    return true;
  } else {
    return false;
  }
}

/* Utilisation */

int main()
{
  if (verifieDoublon(6))
    cout << "Vrai";
  else
    cout << "Faux";
  
  cout << endl;
  return 0;
}
