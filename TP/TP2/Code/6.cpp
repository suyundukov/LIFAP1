/* Afficher une frise */
#include <iostream>

using namespace std;

/* Procédure */

void afficheCarre(int n, char c)
{
  for (int i = 0; i < n; ++i) {
    cout << c;
  }
}

/* Procédure */

void afficheFrise(int n, int l, int h)
{
  for (int i = 0; i < n; ++i) {
    afficheCarre(l, '*');
    afficheCarre(l - 2, ' ');
  }
  
  cout << endl;
  
  for (int i = 1; i < h - 1; ++i) {
    for (int j = 0; j < n; ++j) {
      afficheCarre(1, '*');
      afficheCarre(l - 2, ' ');
      afficheCarre(1, '*');
      afficheCarre(l - 2, ' ');
    }
  	cout << endl;
  }

  afficheCarre(1,'*');

  for (int i = 0; i < n; ++i) {
    afficheCarre(l - 2, ' ');
    afficheCarre(l, '*');
  }
  
  cout << endl;
}

/* Utilisation */

int main()
{
  afficheFrise(5, 6, 7);
  
  cout << endl;
  return 0;
}
