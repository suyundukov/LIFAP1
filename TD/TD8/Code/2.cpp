/**
 * Afficher une chaîne de caractère, en affichant un caractère par ligne
 */
#include <iostream>

/* Procédure */

void afficheParLigne(char c[])
{
  int i;
  
  i = 0;
  
  while (c[i] != '\0') {
    std::cout << c[i] << std::endl;
    ++i;
  }
}

/* Utilisation */

int main()
{
  char mot[] = "bonjour";
  
  afficheParLigne(mot);
  
  return 0;
}
