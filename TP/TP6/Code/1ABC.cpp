/*=============================================================================
  1.           -> Définir la structure d'une
  2. Procédure -> Initialiser une image avec le caractère C
  3. Procédure -> Afficher l'image
=============================================================================*/
#include <iostream>

const short DMAX = 100;

// Structure d'une image
struct Image {
  int x;
  int y;
  char tab[DMAX][DMAX];
};

/* Procédure 1 */

void initImage(Image &im1, char c)
{
  for (int i = 0; i < im1.x; ++i)
    for (int j = 0; j < im1.y; ++j)
      im1.tab[i][j] = c;
}

/* Procédure 2 */

void affImage(Image im1)
{
  for (int i = 0; i < im1.x; ++i) {
    for (int j = 0; j < im1.y; ++j)
      std::cout << im1.tab[i][j] << std::flush;
    std::cout << std::endl;
  }
}

/* Utilisation */

int main()
{
  Image im1;
  
  im1.x = 10; // La hauteur de l'image
  im1.y = 10; // La largeur de l'image
  
  initImage(im1, '*');
  affImage(im1);
  
  return 0;
}
