/* Remplir troisième tableau, qui contient la moyenne de deux premiers */
#include <iostream>

using namespace std;

/* Procèdure */

void calcMoyTab(float tab[], float tab1[], float tab2[], int n)
{
  for (int i = 0; i < n; ++i) {
    tab2[i] = (tab[i] + 2 * tab1[i]) / 3;
  }
}

/* Utilisation */

int main()
{
  float tab[5] = {12, 8, 3, 4, 5};
  float tab1[5] = {15, 3, 4, 5, 6};
  float tab2[5] = {};
  
  calcMoyTab(tab, tab1, tab2, 5);
  
  for (int i = 0; i < 5; ++i) {
    cout << tab2[i] << " ";
  }
  
  cout << endl;
  return 0;
}
