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

/* Procédure Principal */

void dessineCible()
{
  int c;
  
  for (int i = DIMW / 2; i > 0; i -= 25) {
    if (i % 10 == 0)
    	c = 0;
    else
      c = 255;
    dessineCercle(i, c, c, c);
  }
}

/* Utilisation */

int main()
{
  winInit("Cible", DIMW, DIMW);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCible(); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
