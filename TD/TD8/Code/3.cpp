/* Construire dans une nouvelle chaîne, le mirroir d'une autre chaîne */
#include <iostream>

using namespace std;

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
  
  cout << mot1;
  
  cout << endl;
  return 0;
}
