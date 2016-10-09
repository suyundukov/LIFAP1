/* Concatèner deux chaînes de caractères */
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

/* Procèdure */

void chConcat(char c[MAX_SIZE], char c1[MAX_SIZE])
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
  char c[MAX_SIZE] = "Hello";
  char c1[MAX_SIZE] = "World";
  
  chConcat(c, c1); // Appelle de la fonction
  
  cout << c;
  
  cout << endl;
  return 0;
}
