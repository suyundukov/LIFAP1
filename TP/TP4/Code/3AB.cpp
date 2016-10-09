/* Procédure -> Remplir le tableau passé en paramètre */
/* Procédure -> Afficher le tableau passé en paramètre */
#include <iostream>

using namespace std;

const int TAILLE_LIGNE = 100;
const int TAILLE_COLONNE = 100;

/* Procédure 1 */

void tabRemplir(int tab[TAILLE_LIGNE][TAILLE_COLONNE], int tL, int tC)
{
  for (int i = 0; i < tL; ++i) {
    for (int j = 0; j < tC; ++j) {
      cout << "Donne moi une valeur pour tab[" << i << "][" << j << "] : ";
      cin >> tab[i][j];
    }
  }
}

/* Procédure 2 */

void tabAffiche(int tab[TAILLE_LIGNE][TAILLE_COLONNE], int tL, int tC)
{
  for (int i = 0; i < tL; ++i) {
    for (int j = 0; j < tC; ++j) {
      cout << tab[i][j] << "\t";
    }
    cout << endl;
  }
}

/* Utilisation */

int main()
{
  int tC;
  int tL;
  int tab[TAILLE_LIGNE][TAILLE_COLONNE] = {};
  
  cout << "Donne moi le nombre de ligne : ";
  cin >> tL;
  cout << "Donne moi le nombre de colonne : ";
  cin >> tC;
  
  tabRemplir(tab, tL, tC);
  
  tabAffiche(tab, tL, tC);
  
  return 0;
}
