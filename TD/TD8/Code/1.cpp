/* Retourner le nombre de caractères dans une chaine */
#include <iostream>

using namespace std;

/* Fonction */

int nombreCar(char c[])
{
  int i;
  
  i = 0;
  
  while (c[i] != '\0') {
    ++i;
  }
  
  return i;
}

/* Utilisation */

int main()
{
  char mot[] = "bonjour";
  
  cout << nombreCar(mot);
  
  cout << endl;
  return 0;
}
