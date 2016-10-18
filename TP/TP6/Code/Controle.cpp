/*=============================================================================
  NOM     : SUYUNDUKOV
  PRENOM  : Nurlan
  N° Etu. : *****
=============================================================================*/
#include <iostream>

using namespace std;

const int MAX = 19; // Déclaration de la constante

// Fonction de remplissage de tableau
void remplirTab(int tab[MAX])
{
  int i;
  int j;

  for (i = 0; i < MAX; ++i) {
    cout << "Donne moi une valeur : ";
    cin >> tab[i];
    for (j = 0; j < i; ++j) {
      while (tab[i] == tab[j]) {
        cout << "La valeur existe déjà. Donne moi une autre valeur : ";
        cin >> tab[i];
      }
    }
  }
}

// Fonction de mediane
bool mediane(int tab[MAX], int &plusX, int &moinsX, int X)
{
  int i;
  bool n;
  
  i = 0;
  plusX = 0; // Pour les variables qui sont plus que X
  moinsX = 0; // Pour les variables qui sont moins que X
  n = false;
  
  for (i = 0; i < MAX; ++i) {
    if (tab[i] > X)
      ++plusX;
    if (tab[i] < X)
      ++moinsX;
  }
  
  if (plusX == moinsX)
    n = true;
  
  return n;
}

// Programme principal
int main()
{
  int tab[MAX];
  int n;
  int plusX;
  int moinsX;
  
  remplirTab(tab); // Remplissage de notre tableau
  
  cout << "Donne moi une valeur appartenant au tableau : ";
  cin >> n;
  
  if (mediane(tab, plusX, moinsX, n))
    cout << n << " est la médiane de votre série de valeurs" << endl;
  else
    cout << n << " n'est pas la médiane de votre série de valeurs car il y a "
    << moinsX << " valeurs plus petites et " << plusX << " valeurs plus grandes." << endl;
  
  return 0;
}
