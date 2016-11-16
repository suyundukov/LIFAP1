/**
 * 1. Sous-programme -> Calculer la somme des diviseurs et leur produit
 * 2. Fonction -> Retourner VRAI, si entier est un doublon, FAUX sinon
 */
#include <iostream>

/* Procédure */

void sommeProduit(int n, int &som, int &prod)
{
  som = 0;
  prod = 1;

  for (int i = 1; i <= n; ++i)
    if (n % i == 0) {
      som += i;
      prod *= i;
    }
}

/* Fonction */

bool verifieDoublon(int n)
{
  int som;
  int prod;

  sommeProduit(n, som, prod);

  if (prod % som == 0)
    return true;
  else
    return false;
}

/* Utilisation */

int main()
{
  int n;

  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> n;

  if (verifieDoublon(n))
    std::cout << "Oui" << std::endl;
  else
    std::cout << "Non" << std::endl;

  return 0;
}
