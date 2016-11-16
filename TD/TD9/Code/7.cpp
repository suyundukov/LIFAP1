/**
 * Effectuer la symétrie verticale d'une image
 */
#include "myimage.hpp"
#include <iostream>

/* Fonction */

MyImage miroirImage(MyImage im1)
{
  MyImage im2;
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH / 2; ++j)
      im2.couleur[i][j] = im1.couleur[i][im1.sizeH - 1 - j];
  
  return im2;
}

/* Utilisation */

int main()
{
  MyImage im1;
  MyImage im2;
  
  remplitImage(im1, 5, 5); // Remplissage de la structure
  
  im2 = miroirImage(im1); // Appel de la fonction
  
  std::cout << std::endl;
  return 0;
}
