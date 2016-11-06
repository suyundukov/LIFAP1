/* Afficher N carré imbriqués, N est passé en paramètre */
#include <Grapic.h>

using namespace grapic;

const int DIMW = 500;

/* Procédure */

void dessineCarre(int a)
{
  rectangle(DIMW / 2 - a, DIMW/2 - a, DIMW/2 + a, DIMW/2 + a);
}

/* Procédure Principal */

void dessineCarreImbr(int n)
{
  int a;

  a = (DIMW / n) / 2;

  for (int i = n; i > 0; --i)
    dessineCarre(a * i);
}

/* Utilisation */

int main()
{
  winInit("Carré Imbriqués", DIMW, DIMW);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCarreImbr(10);  // Debug
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
