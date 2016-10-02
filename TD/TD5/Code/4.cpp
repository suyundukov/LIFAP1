/* Dessiner une rosace constitué de 36 cercles */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{
  float angle;
  float ray;
  int n;
  
  ray = 60;
  n = 36;
  
  winInit("Ligne", wndw, wndw);
  winClear();

  for (int i = 0; i < n; ++i) {
    angle = 2.0 * 3.14 * i / n;
    circle(wndw / 2 + ray * cos(angle), wndw / 2 + ray * sin(angle), ray * 2);
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
