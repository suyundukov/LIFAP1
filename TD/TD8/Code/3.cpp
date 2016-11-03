/* Construire dans une nouvelle chaîne, le mirroir d'une autre chaîne */
#include <iostream>

/* Procédure */

void mirroirCar(char c[], char c1[], int n)
{
  for (int i = 0; i < n; ++i) {
    c1[i] = c[n - 1 - i];
  }
}

/* Utilisation */

int main()
{
  char mot[] = "bonjour";
  char mot1[] = "";
  
  mirroirCar(mot, mot1, 7);
  
  std::cout << mot1 << std::endl;
  return 0;
}
