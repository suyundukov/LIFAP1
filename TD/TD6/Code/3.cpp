/* Afficher les valeurs contenues dans le tableau */
#include <iostream>

using namespace std;

/* Procédure */

void afficheTableau(float tab[], int n)
{
  tab[n] = {};
  
  for (int i = 0; i < n; ++i) {
    cout << tab[i] << " | ";
  }
}

/* Utilisation */

int main()
{
  float tab[9] = {12, 18.5, 13.2, 8.75, 16, 15, 13.5, 12, 17};
  
  afficheTableau(tab, 9);
  
  cout << endl;
  return 0;
}
