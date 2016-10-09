/* 1. Procédure -> Demander à USER de remplir le tableau */
/* 2. Procédure -> Afficher le tableau */
#include <iostream>

using namespace std;

const int taille = 100;

/* Procédure */

void tabRemplir(int tab[taille], int tailleT)
{
  for (int i = 0; i < tailleT; ++i) {
    cout << "Donne moi une valeur pour la case " << i + 1 << " : ";
    cin >> tab[i];
  }
}

/* Procédure */

void tabAff(int tab[taille], int tailleT)
{
  for (int i = 0; i < tailleT; ++i) {
    cout << tab[i] << "\t";
  }
}

/* Utilisation */

int main()
{
  int tab[taille] = {};
  
  tabRemplir(tab, 6);
  
  tabAff(tab, 6);
  
  cout << endl;
  return 0;
}
