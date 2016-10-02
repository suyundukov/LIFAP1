/* Afficher une chaîne de caractère, en affichant un caractère par ligne */
#include <iostream>

using namespace std;

/* Procédure */

void afficheParLigne(char c[])
{
  int i;
  
  i = 0;
  
  while (c[i] != '\0') {
    cout << c[i] << endl;
    ++i;
  }
}

/* Utilisation */

int main()
{
  char mot[] = "bonjour";
  
  afficheParLigne(mot);
  
  cout << endl;
  return 0;
}
