/**
 * Retourner une nouvelle chaîne de caractère sans voyelles
 */
#include <iostream>

/* Procédure */

void sansVoyelle(char c[], char c1[])
{
  int j;
  
  j = 0;
  
  for (int i = 0; c[i] != '\0'; ++i)
    if ( c[i] != 'a' && c[i] != 'e' && c[i] != 'i' &&
         c[i] != 'o' && c[i] != 'u' && c[i] != 'y' &&
         c[i] != 'A' && c[i] != 'E' && c[i] != 'I' &&
         c[i] != 'O' && c[i] != 'U' && c[i] != 'Y') {
      c1[j] = c[i];
      ++j;
    }
}

/* Utilisation */

int main()
{
  char c[] = "BonJour";
  char c1[] = "";
  
  sansVoyelle(c, c1);
  
  std::cout << c1 << std::endl;
  
  return 0;
}
