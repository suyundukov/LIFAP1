#include "myimage.hpp"
#include <cstdlib>
#include <ctime>

// Fonction de remplisage
void remplitImage(MyImage& im1, int tX, int tY)
{
  im1.sizeV = tX;
  im1.sizeH = tY;
  
  srand(static_cast<unsigned int>(time(NULL)));
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j)
      im1.couleur[i][j] = rand() % 256;
}
