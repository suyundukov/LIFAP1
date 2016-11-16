/**
 * Retourner une nouvelle image, calculée comme la somme de deux images
 */
#include "myimage.hpp"
#include <iostream>

/* Procédure */

MyImage sommeImage(MyImage im1, MyImage im2)
{
  MyImage im3;

  im3 = im1;
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j) {
      if (im3.couleur[i][j] + im2.couleur[i][j] >= 255)
        im3.couleur[i][j] = 255;
      else
        im3.couleur[i][j] += im2.couleur[i][j];
    }
  
  return im3;
}

/* Utilisation */

int main()
{
  MyImage im1;
  MyImage im2;
  MyImage im3;
  
  remplitImage(im1, 5, 5); // Remplissage de l'image
  remplitImage(im2, 5, 5); // Remplissage de l'image
  
  im3 = sommeImage(im1, im2); // Appel de la fonction
  
  std::cout << std::endl;
  return 0;
}
