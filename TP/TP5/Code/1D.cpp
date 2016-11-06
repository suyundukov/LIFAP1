/* Concatèner deux chaînes de caractères */
#include <cstring>
#include <iostream>

const int SIZE = 100;

/* Procèdure */

void chConcat(char c[SIZE], char c1[SIZE])
{
  long i;
  int j;
  
  i = strlen(c);
  j = 0;
  
  c[i] = ' ';
  i += 1;
  
  while (c[j] != '\0') {
    c[i] = c1[j];
    ++i;
    ++j;
  }
  
  c[i] = '\0';
}

/* Utilisatoin */

int main()
{
  char c[SIZE] = "Hello";
  char c1[SIZE] = "World";
  
  chConcat(c, c1); // Appelle de la fonction
  
  std::cout << c << std::endl;

  return 0;
}
