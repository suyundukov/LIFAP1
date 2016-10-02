/* Remplir un tableau de notes, quantité des notes est demandée à USER */
#include <iostream>

using namespace std;

/* Procédure */

void remplirTableau(float tab[], int n)
{
  for (int i = 0; i < n; ++i) {
    cout << "Donne moi une valeur pour la case n° " << i + 1 << " : ";
    cin >> tab[i];
  }
}

/* Utilisation */

int main()
{
  float tab[5];
  
  remplirTableau(tab, 5);
  
  cout << endl;
  return 0;
}
