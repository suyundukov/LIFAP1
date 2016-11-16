#pragma once

const int MAX_SIZE = 500;

// Structure de l'image
struct MyImage {
  int sizeH;
  int sizeV;
  int couleur[MAX_SIZE][MAX_SIZE];
};

void remplitImage(MyImage& im1, int tX, int tY);
