/* Dessinner une grille où chaque chaque ligne/colonne est espacée de 10px */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{  
  winInit("Ligne", wndw, wndw);
  backgroundColor(255, 0, 100);
  winClear();
  
  for (int i = 0; i < wndw; i += 10) {
    line(0, i, 499, i);  // Ligne Horizontale
    line(i, 0, i, 499);  // Ligne Vertical
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
