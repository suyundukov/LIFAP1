#pragma once

#include <cstdlib>
#include <ctime>

const int MAX_SIZE = 500;

// Structure de l'image
struct MyImage
{
  int sizeH;
  int sizeV;
  int couleur[MAX_SIZE][MAX_SIZE];
};

// Fonction de remplisage
void remplitImage(MyImage &im1, int tX, int tY)
{
  im1.sizeV = tX;
  im1.sizeH = tY;
  
  srand(time(NULL));
  
  for (int i = 0; i < im1.sizeV; ++i) {
    for (int j = 0; j < im1.sizeH; ++j) {
      im1.couleur[i][j] = rand() % 256;
    }
  }
}

