/* Trier un tableau de 10 entiers en utilisant le tri par comptage */
#include <iostream>

using namespace std;

const int TAILLE = 10;

/* Procédure */

void compter(int tab[TAILLE], int tab1[TAILLE])
{
  int indice; // Utiliser dans le tableau résultat
  int nmbr;
  int tabComptage[TAILLE] = {};

  indice = 0;

  // Tableau de comptage
  for (int i = 0; i < TAILLE; ++i) {
    nmbr = 0;
    for (int j = 0; j < TAILLE; ++j) {
      if (tab[i] > tab[j])
        nmbr += 1;
    }
    tabComptage[i] = nmbr;
  }

  // Tableau résultat
  for (int i = 0; i < TAILLE; ++i) {
    for (int j = 0; j < TAILLE; ++j) {
      if (tabComptage[j] == i)
        indice = j;
    }
    tab1[i] = tab[indice];
  }
}

/* Utilisation */

int main()
{
  int tab[TAILLE] = {52, 10, 1, 25, 62, 3, 8, 55, 66, 99};
  int tab1[TAILLE] = {};

  compter(tab, tab1);

  for (int i = 0; i < TAILLE; ++i) {
    cout << tab1[i] << "\t";
  }

  cout << endl;
  return 0;
}
