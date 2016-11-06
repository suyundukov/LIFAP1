/* 1. Calculer et Retourner la factorielle d'un nombre */
/* 2. Afficher les 15 premières valeurs des factorielles */
#include <iostream>

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
  for (int i = 0; i < 15; ++i)
    std::cout << i << "! = " << fact(i) << std::endl;

  return 0;
}
