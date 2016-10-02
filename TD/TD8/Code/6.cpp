/* Retourner la chaîne équivalente en majuscule */
#include <iostream>

using namespace std;

/* Procédure */

void minToMaj(char c[], char c1[])
{
  for (int i = 0; c[i] != '\0'; ++i) {
    if (c[i] >= 97 && c[i] <= 122)
      c1[i] = c[i] - 32;
    else
      c1[i] = c[i];
  }
}

/* Utilisation */

int main()
{
  char c[] = "BonjOur13";
  char c1[] = "";
  
  minToMaj(c, c1);
  
  cout << c1;
  
  cout << endl;
  return 0;
}
