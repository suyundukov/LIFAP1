/**
 * 1.           -> Déclarer deux constantes
 * 2.           -> Écrire une structure, pour pouvoir stocker une image
 * 3. Fonction  -> Rémplir la structure 
 * 4. Procédure -> Afficher les valeurs des différents pixels
 */
#include <iostream>

/* Déclaration des variables */

const int MAX_SIZE = 256;

/* La structure de donnée permettant de stocker une image */

struct MyImage {
  int sizeV; // La hauteur de l'image
  int sizeH; // La largeur de l'image
  int couleur [MAX_SIZE][MAX_SIZE]; // Ici on stocke le niveau de gris
};

/* Fonction */

MyImage remplitImage(MyImage im1, int tX, int tY)
{
  im1.sizeV = tX;
  im1.sizeH = tY;
  
  for (int i = 0; i < im1.sizeV; ++i)
    for (int j = 0; j < im1.sizeH; ++j)
      std::cin >> im1.couleur[i][j];
  
  return im1;
}

/* Procédure */

void afficheValeur(MyImage im1, int pX, int pY)
{
  std::cout << im1.couleur[pX][pY] << std::endl;
}

/* Utilisation */

int main()
{
  int min;
  int max;
  float moy;
  MyImage im1;
  
  im1 = remplitImage(im1, 10, 10); // Remplissage de la structure
  
  afficheValeur(im1, 0, 1); // Affichage de valeur d'un certain pixel
  
  return 0;
}
