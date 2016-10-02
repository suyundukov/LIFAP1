/* 1. Calculer et Retourner la factorielle d'un nombre */
/* 2. Afficher les 15 premières valeurs des factorielles */
#include <iostream>

using namespace std;

/* Fonction */

double fact(int a)
{
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

/* Utilisation */

int main()
{
  for (int i = 0; i < 15; ++i) {
    cout << i << "! = " << fact(i) << "\n";
  }

  cout << endl;
  return 0;
}
