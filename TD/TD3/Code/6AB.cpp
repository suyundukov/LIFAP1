/**
 * Fonction -> Retourner VRAI si N est parfait, faux sinon
 * Afficher la liste des nombres parfait compris entre 1 et 10 000
 */
#include <iostream>

/* Fonction */

bool estParfait(int a)
{
  int somme;

  somme = 0;

  for (int i = 1; i < a; ++i)
    if ((a % i) == 0)
      somme += i;

  if (somme == a)
    return true;
  else
    return false;
}

/* Utilisation / Programme principal */

int main()
{
  for (int i = 1; i < 10000; ++i)
    if (estParfait(i))
      std::cout << i << std::endl;

  return 0;
}
