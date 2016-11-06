/* Retourner vrai si deux chaînes sont identiques, faux sinon */
#include <cstring>
#include <iostream>

const int SIZE = 100;

/* Fonction */

bool chCompare(char c[SIZE], char c1[SIZE])
{
  bool n;
  int i;
  
  n = true;
  i = 0;
  
  while (n != false && i < (strlen(c) - 1)) {
    if (c1[i] != c[i])
      n = false;
    else
      n = true;
    ++i;
  }
  
  return n;
}

/* Utilisatoin */

int main()
{
  char c[SIZE] = "Marshall";
  char c1[SIZE] = "Lolipop";
  
  if (chCompare(c, c1)) // Appel de la fonction
    std::cout << "Vrai" << std::endl;
  else
    std::cout << "Faux" << std::endl;
  
  return 0;
}
