/* Afficher N carré imbriqués, N est passé en paramètre */
#include <Grapic.h>

using namespace grapic;

const int DIMW = 500;

/* Procédure */

void dessineCercle(int ray, int r, int g, int b)
{
  color(r, g, b);
  circleFill(DIMW / 2, DIMW / 2, ray);
}

/* Utilisation */

int main()
{
  winInit("Cercle", DIMW, DIMW);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCercle(100, 250, 66, 100); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
