/**
 * 1.           -> Définir la structure pour stocker NB_IMAGE
 * 2. Procédure -> Ajouter une image à notre structure
 * 3. Procédure -> Supprimer une image de notre structure
 */
#include <iostream>
#include "myimage.hpp"

const int NB_IMAGE = 16;

/* Structure d'un dessin animé */

struct Dessin {
  int nmbrImg;
  MyImage tab[NB_IMAGE];
};

/* Procédure 1 */

void ajoutImage(Dessin& des1, MyImage im1)
{
  des1.tab[des1.nmbrImg] = im1;
  des1.nmbrImg += 1;
}

/* Procédure 2 */

void retireImage(Dessin& des1, int numeroImg)
{
  for (int i = numeroImg; i < des1.nmbrImg - 1; ++i)
    des1.tab[i] = des1.tab[i + 1];
  des1.nmbrImg -= 1;
}

/* Utilisation */

int main()
{
  Dessin des1;
  MyImage im1;
  
  des1.nmbrImg = 4;
  
  // Remplissage des images
  for (int i = 0; i < des1.nmbrImg; ++i)
    remplitImage(des1.tab[i], 16, 16);
  
  remplitImage(im1, 16, 16);
  
  ajoutImage(des1, im1);  // Debug
  
  retireImage(des1, 2);  // Debug
  
  return 0;
}
