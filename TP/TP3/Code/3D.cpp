/* Afficher N carré imbriqués, N est passé en paramètre */
#include <Grapic.h>

using namespace grapic;

const int size = 500;

/* Procédure */

void dessineCercle(int ray, int r, int g, int b)
{
  color(r, g, b);
  circleFill(size / 2, size / 2, ray);
}

/* Utilisation */

int main()
{
  winInit("Cercle", size, size);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCercle(100, 250, 66, 100); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
