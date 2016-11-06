/* Dessiner une grille, produisant un dégradé de vert ↖︎ à rouge ↘︎ */
#include <Grapic.h>

using namespace grapic;

const int DIMW = 500;

/* Procédure */

void grilleDeCarres()
{
  int r;
  int i;
  int j;
  
  const int c = 50;
  
  for (i = 0; i < 10; ++i) {
    for (j = 0; j < 10; ++j) {
      color(255 * i * 10 / 100, 255 * j * 10 / 100, 0);
      rectangleFill(i * c + 1, j * c + 1, (i + 1) * c - 1, (j + 1) * c - 1);
    }
  }
}

/* Utilisation */

int main()
{
  winInit("Cible", DIMW, DIMW);
  backgroundColor(255, 255, 255);
  winClear();

  grilleDeCarres(); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
