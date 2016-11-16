/**
 * Calculer le nombre de combinaison de P éléments pour un ensemble de N
 */
#include <iostream>

/* Fontion de factorielle */

int fact(int n)
{
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

/* Fonction */

int combin(int n, int p)
{
  int res;
  
  res = fact(n) / (fact(p) * fact(n - p));
  
  return res;
}

/* Utilisation */

int main()
{
  int n;
  int p;
  
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> n;
  std::cout << "Donne moi une autre valeur : " << std::flush;
  std::cin >> p;
  
  std::cout << combin(n, p) << std::endl;
  
  return 0;
}
