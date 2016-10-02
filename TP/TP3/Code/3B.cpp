/* Afficher un carré, dont la taille est passé en paramètre */
#include <Grapic.h>

using namespace grapic;

const int size = 500;

/* Procédure */

void dessineCarre(int a)
{
  rectangle(size / 2 - a, size/2 - a, size/2 + a, size/2 + a);
}

/* Utilisation */

int main()
{
  winInit("Carré", size, size);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCarre(200); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
