/*=============================================================================
  NOM     : SUYUNDUKOV
  PRENOM  : Nurlan
  N° Etu. : *****
=============================================================================*/
#include <iostream>

const int MAX = 19; // Déclaration de la constante

// Fonction de remplissage de tableau
void remplirTab(int tab[MAX])
{
  int i;
  int j;

  for (i = 0; i < MAX; ++i) {
    std::cout << "Donne moi une valeur : " << std::flush;
    std::cin >> tab[i];
    for (j = 0; j < i; ++j)
      while (tab[i] == tab[j]) {
        std::cout << "La valeur existe déjà. Donne moi une autre valeur : " << std::flush;
        std::cin >> tab[i];
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
  
  std::cout << "Donne moi une valeur appartenant au tableau : " << std::flush;
  std::cin >> n;
  
  if (mediane(tab, plusX, moinsX, n))
    std::cout << n << " est la médiane de votre série de valeurs" << std::endl;
  else
    std::cout << n << " n'est pas la médiane de votre série de valeurs car 
              il y a " << moinsX << " valeurs plus petites et " << plusX
              << " valeurs plus grandes." << std::endl;
  
  return 0;
}
