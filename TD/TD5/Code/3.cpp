/* Dessiner 20 carrés de largeur 10 disposés en cercle autour du centre */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{
  float angle;
  float ray;
  int n;
  
  ray = 200.0;
  n = 20;
  
  winInit("Ligne", wndw, wndw);
  winClear();
  
  for (int i = 0; i < n; ++i) {
    angle = 2.0 * 3.14 * i / n;
    rectangle(250 + ray * cos(angle) - 5, 250 + ray * sin(angle) - 5, 
      250 + ray * cos(angle) + 5, 250 + ray * sin(angle) + 5);
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
