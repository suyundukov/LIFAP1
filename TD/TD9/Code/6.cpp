/* Effectuer le seuillage d'une image */
#include <iostream>
#include "myimage.h"

using namespace std;

/* Procédure */

void seuillage(MyImage &im1, int n)
{
  for (int i = 0; i < im1.sizeV; ++i) {
    for (int j = 0; j < im1.sizeH; ++j) {
      if (im1.couleur[i][j] < n)
        im1.couleur[i][j] = 0;
      else
        im1.couleur[i][j] = 255;
    }
  }
}

/* Utilisation */

int main()
{
  MyImage im1;
  
  remplitImage(im1, 5, 5); // Remplissage de couleur
  
  seuillage(im1, 150); // Seuillage
  
  cout << endl;
  return 0;
}
