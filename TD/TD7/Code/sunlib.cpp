#include "sunlib.hpp"

/* Fonction de factorielle */

int fact(int n)
{
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

/* Fonction de combinaison */

int combin(int n, int p)
{
  int res;
  
  res = fact(n) / (fact(p) * fact(n - p));
  
  return res;
}