/* Procédure -> Extraire le niveau du gris maximum, minimum et moyen */
#include "myimage.h"
#include <iostream>

using namespace std;

/* Procédure */

void minMaxMoy(MyImage im1, int &min, int &max, float &moy)
{
  int sum;
  
  min = im1.couleur[0][0];
  max = im1.couleur[0][0];
  sum = 0;
  
  for (int i = 0; i < im1.sizeV; ++i) {
    for (int j = 0; j < im1.sizeH; ++j) {
      if (min > im1.couleur[i][j])
        min = im1.couleur[i][j];
      if (max < im1.couleur[i][j])
        max = im1.couleur[i][j];
      sum += im1.couleur[i][j];
    }
  }
  
  moy = sum / (im1.sizeV * im1.sizeH);
}

int main()
{
  int min;
  int max;
  float moy;
  MyImage im1;
  
  remplitImage(im1, 10, 10); // Remplissage de la structure
  
  minMaxMoy(im1, min, max, moy); // Extraction de niveau de gris
  
  cout << min << " " << max << " " << moy;
  
  cout << endl;
  return 0;
}
