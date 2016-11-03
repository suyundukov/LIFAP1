/* Retourner le nombre de caractères dans une chaine */
#include <iostream>

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
  
  std::cout << nombreCar(mot) << std::endl;
  return 0;
}
