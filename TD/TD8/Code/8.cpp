/**
 * Retourner le nombre de majuscule, de minuscule et de voyelles
 */
#include <iostream>

/* Procédure */

void compter(char c[], int& maj, int& min, int& voy)
{
  maj = 0;
  min = 0;
  voy = 0;
  
  for (int i = 0; c[i] != '\0'; ++i) {
    if ( c[i] == 'a' || c[i] == 'e' || c[i] == 'i' ||
         c[i] == 'o' || c[i] == 'u' || c[i] == 'y' ||
         c[i] == 'A' || c[i] == 'E' || c[i] == 'I' ||
         c[i] == 'O' || c[i] == 'U' || c[i] == 'Y')
      ++voy;
    if (c[i] >= 65 && c[i] <= 90)
      maj += 1;
    if (c[i] >= 97 && c[i] <= 122)
      min += 1;
  }
}

/* Utilisation */

int main()
{
  int maj;
  int min;
  int voy;
  
  char c[] = "BonJOurMonsieUE";
  
  compter(c, maj, min, voy);  // Debug
  
  std::cout << maj << " " << min << " " << voy << std::endl;
  
  return 0;
}
