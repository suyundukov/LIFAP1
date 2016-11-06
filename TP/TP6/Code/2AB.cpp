/*=============================================================================
  1. Procédure -> Remplir un rectangle avec le caractère C !!!dans!!! l'image
  2. Procédure -> Dessiner un cercle plein !!!dans!!! l'image
=============================================================================*/
#include <cmath>
#include <iostream>

const short DMAX = 100;

// Structure d'une image
struct Image {
  int x;
  int y;
  char tab[DMAX][DMAX];
};

// Initialisation de l'image
void initImage(Image &im1, char c)
{
  for (int i = 0; i < im1.x; ++i)
    for (int j = 0; j < im1.y; ++j)
      im1.tab[i][j] = c;
}

// Affichage de l'image
void affImage(Image im1)
{
  for (int i = 0; i < im1.x; ++i) {
    for (int j = 0; j < im1.y; ++j)
      std::cout << im1.tab[i][j] << std::flush;
    std::cout << std::endl;
  }
}

/* Procédure 1 */

void ImDessineRect(Image &im1, char c, int xmin, int ymin, int xmax, int ymax)
{
  int stepx = (xmin < xmax) ? 1 : -1;
  int stepy = (ymin < ymax) ? 1 : -1;
  
  // Les "horizontales"
  for (int i = xmin; i != (xmax + stepx); i += stepx) {
    im1.tab[i][ymin] = c;
    im1.tab[i][ymax] = c;
  }
  
  // Les "verticales" (on évite de refaire les coins)
  for (int i = ymin + stepy; i != ymax; i += stepy) {
    im1.tab[xmin][i] = c;
    im1.tab[xmax][i] = c;
  }
}

/* Procédure 2 */

void ImDessineCercle(Image &im1, char c, int x0, int y0, int r)
{
  int y;

  for (int i = x0 - r; i <= x0 + r; ++i) {
    y = (int)sqrt((float)(r * r - (x0 - i) * (x0 - i)));
    im1.tab[i][y0 + y] = c;
    im1.tab[i][y0 - y] = c;
  }
}

/* Utilisation */

int main(void)
{
  Image im1;
  im1.x = 10;
  im1.y = 10;
  char plein = 'o';
  char vide = '.';
  
  initImage(im1,vide);
  ImDessineRect(im1, plein, 2, 8, 7, 1);
  affImage(im1);
  
  std::cout << std::endl;

  initImage(im1,vide);
  ImDessineCercle(im1, 'x', 5, 5, 4);
  affImage(im1);

  return 0;
}
