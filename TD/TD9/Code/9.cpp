/* 1.           -> Définir la structure pour stocker NB_IMAGE
 * 2. Procédure -> Ajouter une image à notre structure
 * 3. Procédure -> Supprimer une image de notre structure */
#include <iostream>

const int MAX_SIZE = 256;
const int NB_IMAGE = 16;

// Structure d'une image
struct Image
{
  int sizeV;
  int sizeH;
  int couleur [MAX_SIZE][MAX_SIZE];
};

/* Structure d'un dessin animé */

struct Dessin
{
  int nmbrImg;
  Image tab[NB_IMAGE];
};

/* Procédure 1 */

void ajoutImage (Dessin &des1, Image im1)
{
  des1.tab[des1.nmbrImg] = im1;
  des1.nmbrImg += 1;
}

/* Procédure 2 */

void retireImage (Dessin &des1, int numeroImg)
{
  for (int i = numeroImg; i < des1.nmbrImg - 1; ++i) {
    des1.tab[i] = des1.tab[i + 1];
  }
  des1.nmbrImg += 1;
}

/* Utilisation */

int main()
{
  // !!!
  return 0;
}
