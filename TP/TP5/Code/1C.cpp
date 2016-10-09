/* Modifier une chaîne de caractère en son mirroir */
#include <cstring>
#include <iostream>

using namespace std;

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
  
  cout << c;
  
  cout << endl;
  return 0;
}
