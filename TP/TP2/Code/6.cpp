/* Afficher une frise */
#include <iostream>

/* Procédure */

void afficheCarre(int n, char c)
{
  for (int i = 0; i < n; ++i)
    std::cout << c << std::flush;
}

/* Procédure */

void afficheFrise(int n, int l, int h)
{
  for (int i = 0; i < n; ++i) {
    afficheCarre(l, '*');
    afficheCarre(l - 2, ' ');
  }
  
  std::cout << std::endl;
  
  for (int i = 1; i < h - 1; ++i) {
    for (int j = 0; j < n; ++j) {
      afficheCarre(1, '*');
      afficheCarre(l - 2, ' ');
      afficheCarre(1, '*');
      afficheCarre(l - 2, ' ');
    }
  	std::cout << std::endl;
  }

  afficheCarre(1,'*');

  for (int i = 0; i < n; ++i) {
    afficheCarre(l - 2, ' ');
    afficheCarre(l, '*');
  }
  
  std::cout << std::endl;
}

/* Utilisation */

int main()
{
  afficheFrise(5, 6, 7);
  
  std::cout << std::endl;
  return 0;
}
