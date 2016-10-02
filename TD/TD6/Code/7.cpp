/* Remplacer les valeurs de chaque case par la somme des valeurs precedents */
#include <iostream>

using namespace std;

/* Procédure */

void cumul(float tab[], int size)
{
  for (int i = 0; i < size; ++i) {
    tab[i] += tab[i - 1];
  }
}

/* Utilisation */

int main()
{
  float tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  cumul(tab, 9);
  
  for (int i = 0; i < 9; ++i) {
    cout << tab[i] << " ";
  }
  
  cout << endl;
  return 0;
}
