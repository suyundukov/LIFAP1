/* Modifier une chaîne de caractère en son mirroir */
#include <cstring>
#include <iostream>

/* Procèdure */

void chMirroir(char c[])
{
  char temp;
  
  for (int i = 0; i < (strlen(c) / 2); ++i) { // Longueur / 2
    temp = c[i];
    c[i] = c[(strlen(c) - 1) - i];
    c[(strlen(c) - 1) - i] = temp;
  }
}
/* Utilisatoin */

int main()
{
  char c[] = "Hello";
  
  chMirroir(c);
  
  std::cout << c << std::endl;
  
  return 0;
}
