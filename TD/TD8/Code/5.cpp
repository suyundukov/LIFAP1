/**
 * Retourner vrai, si la chaîne de caractères est polindrome, faux sinon
 */
#include <cstring>
#include <iostream>

/* Fonction */

bool polindrome(char c[])
{
  int i;
  bool n;
  
  i = 0;
  n = true;
  
  while (c[i] != '\0' && n == true) {
    if (c[i] == c[strlen(c) - 1 - i])
      n = true;
    else
      n = false;
    ++i;
  }
  
  return n;
}

/* Utilisation */

int main()
{
  char mot[] = "kayak";
  
  if (polindrome(mot))
    std::cout << "Vrai" << std::endl;
  else
    std::cout << "Faux" << std::endl;
  
  return 0;
}
