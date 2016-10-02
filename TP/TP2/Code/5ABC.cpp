/* 1. Procédure -> Afficher N fois la caractère C sur une ligne */
/* 2. Procédure -> Afficher deux caractère C, entre eux il y a des espaces */
/* 3. Procédure -> Afficher le contour d'un carré, en utilisant ^^ */
#include <iostream>

using namespace std;

/* Procédure 1 */

void lignePleine(int n, char c)
{
  for (int i = 0; i < n; ++i) {
    cout << c;
  }
}

/* Procédure 2 */

void ligneCreuse(int n, char c)
{
  for (int i = 0; i < n; ++i) {
    if (i == 0 || i == n - 1)
      cout << c;
    else
      cout << " ";
  }
}

/* Procédure 3 */

void afficheCarre(int n, char c)
{
  lignePleine(n, c);
  cout << endl;
  
  for (int i = 0; i < n - 2; ++i) {
    ligneCreuse(n, c);
    cout << endl;
  }
  
  lignePleine(n, c);
}

/* Utilisation */

int main()
{
  afficheCarre(10, '*');
  
  cout << endl;
  return 0;
}
