/* Afficher N carré imbriqués, N est passé en paramètre */
#include <Grapic.h>

using namespace grapic;

const int size = 500;

/* Procédure */

void dessineCarre(int a)
{
  rectangle(size / 2 - a, size/2 - a, size/2 + a, size/2 + a);
}

/* Procédure Principal */

void dessineCarreImbr(int n)
{
  int a = (size / n) / 2;
  for (int i = n; i > 0; --i) {
    dessineCarre(a * i);
  }
}

/* Utilisation */

int main()
{
  winInit("Carré Imbriqués", size, size);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCarreImbr(10); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
