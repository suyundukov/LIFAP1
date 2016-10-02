/* Afficher un damier de deux images */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{  
  winInit("Ligne", wndw, wndw);
  winClear();
  
  Image fan = image("data/pacman/fantome.png");
  Image pac = image("data/pacman/pacman.png");
  
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      if ((i + j) % 2 == 0) {
        image_draw(fan, i * 50, j * 50, 50, 50);
      } else {
        image_draw(pac, i * 50, j * 50, 50, 50);
      }
    }
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
