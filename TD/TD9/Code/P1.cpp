/**
 *              -> Proposer le menu, avec les actions
 */
#include <iostream>
#include "myimage.hpp"

#define NMBR_IMGS 4

// Affichage de menu
void afficherMenu()
{
  std::cout << "=======================" << std::endl;
  std::cout << "1. Saisir une image" << std::endl;
  std::cout << "2. Extraire des valeurs min, max, moy" << std::endl;
  std::cout << "3. Seuiller l'image" << std::endl;
  std::cout << "4. Miroir de l'image" << std::endl;
  std::cout << "5. Sommer deux images" << std::endl;
  std::cout << "6. Quitter" << std::endl;
  std::cout << "=======================" << std::endl;
}

// Initialisation de l'image
void initImage(MyImage& im1)
{
  im1.sizeV = NMBR_IMGS;
  im1.sizeH = NMBR_IMGS;
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j)
      im1.couleur[i][j] = 0;
}

// Saisie de l'image
void saisirImage(MyImage& im1, int tX, int tY)
{
  im1.sizeV = NMBR_IMGS;
  im1.sizeH = NMBR_IMGS;
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j)
      std::std::cin >> im1.couleur[i][j];
}

// Affichage de l'image
void afficherImage(MyImage im1)
{
  for (int i = 0; i < im1.sizeV; ++i) {
    for (int j = 0; j < im1.sizeH; ++j)
      std::cout << im1.couleur[i][j] << std::flush;
    std::cout << std::endl;
  }
}

// Plus petite, plus grande et moyenne
void minMaxMoy(MyImage im1, int& min, int& max, float& moy)
{
  int sum;
  
  min = im1.couleur[0][0];
  max = im1.couleur[0][0];
  sum = 0;
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j) {
      if (min > im1.couleur[i][j])
        min = im1.couleur[i][j];
      if (max < im1.couleur[i][j])
        max = im1.couleur[i][j];
      sum += im1.couleur[i][j];
    }
  
  moy = sum / (im1.sizeV * im1.sizeH);
}

// Seillage de l'image
void seuillerImage(MyImage& im1, int n)
{
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j) {
      if (im1.couleur[i][j] < n)
        im1.couleur[i][j] = 0;
      else
        im1.couleur[i][j] = 255;
    }
}

// Mirroir de l'image
void miroirImage(MyImage& im1)
{
  int temp;

  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH / 2; ++j) {
      temp = im1.couleur[i][j];
      im1.couleur[i][j] = im1.couleur[i][im1.sizeH - j - 1];
      im1.couleur[i][im1.sizeH - j - 1] = temp;
    }
}

// Somme des images
void sommeImage(MyImage& im1, MyImage im2)
{
  for (int i = 0; i < im1.sizeV; ++i) {
    for (int j = 0; j < im1.sizeH; ++j) {
      if (im1.couleur[i][j] + im2.couleur[i][j] >= 255)
        im1.couleur[i][j] = 255;
      else
        im1.couleur[i][j] += im2.couleur[i][j];
    }
  }
}

// Choix des actions
void choisirMenu ()
{
  char choix;
  MyImage im1;
  MyImage im2;
  int mini;
  int maxi;
  float moy;
  int seuil;

  initImage(im1);
  initImage(im2);

  do {
    afficherMenu();
    std::cout << "   Il faut choisir : " << std::flush;
    std::cin >> choix;
    switch (choix) {
      case '1':
        saisirImage(im1, NMBR_IMGS, NMBR_IMGS);
        afficherImage(im1);
        break;
      case '2':
        minMaxMoy(im1, mini, maxi, moy);
        std::cout << "min : " << mini << "\nmax : " << maxi 
             << "\nmoyenne : " << moy << std::endl;
        break;
      case '3':
        std::cout << "Donne moi le seuil : " << std::flush;
        std::cin >> seuil;
        seuillerImage(im1, seuil);
        afficherImage(im1);
        break;
      case '4':
        miroirImage(im1);
        afficherImage(im1);
        break;
      case '5':
        saisirImage(im2, NMBR_IMGS, NMBR_IMGS);
        sommeImage(im1, im2);
        afficherImage(im1);
        break;
      case '6':
        std::cout << "Au revoir" << std::endl;
      default:
        break;
    }
  } while (choix != '6');
}

// Utilisation
int main()
{
  choisirMenu();  // Debug

  return 0;
}
