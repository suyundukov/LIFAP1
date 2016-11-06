/* 1. Procédure -> Afficher N fois la caractère C sur une ligne */
/* 2. Procédure -> Afficher deux caractère C, entre eux il y a des espaces */
/* 3. Procédure -> Afficher le contour d'un carré, en utilisant ^^ */
#include <iostream>

/* Procédure 1 */

void lignePleine(int n, char c)
{
  for (int i = 0; i < n; ++i)
    std::cout << c << std::flush;
}

/* Procédure 2 */

void ligneCreuse(int n, char c)
{
  for (int i = 0; i < n; ++i)
    if (i == 0 || i == n - 1)
      std::cout << c << std::flush;
    else
      std::cout << " " << std::flush;
}

/* Procédure 3 */

void afficheCarre(int n, char c)
{
  lignePleine(n, c);
  std::cout << std::endl;
  
  for (int i = 0; i < n - 2; ++i) {
    ligneCreuse(n, c);
    std::cout << std::endl;
  }
  
  lignePleine(n, c);
}

/* Utilisation */

int main()
{
  afficheCarre(10, '*');
  
  std::cout << std::endl;
  return 0;
}
