/* Afficher une image dont la taille diminue au cours du temps */
#include <Grapic.h>

using namespace grapic;

const int size = 500;

/* Procédure */

void imageDiminue()
{
  const int nmbr = 30; // Nombre de frame
  Image im = image("data/mine.png");
  
  for (int i = 0; i < nmbr; i++) {
    winClear();
    image_draw(im,
               size / 2 - (400 - i * 400 / nmbr) / 2,
               size / 2 - (400 - i * 400 / nmbr) / 2,
               400 - i * 400 / nmbr,
               400 - i * 400 / nmbr);
    winDisplay();
    delay(2000 / nmbr);
  }
}

/* Utilisation */

int main()
{
  winInit("Cible", size, size);
  backgroundColor(255, 255, 255);
  winClear();
  
  imageDiminue(); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
