/* Dessiner une horloge */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{
  float angle;
  float ray;
  int n;
  
  ray = 200.0;
  n = 12;
  
  winInit("Ligne", wndw, wndw);
  winClear();
  
  for (int i = 1; i <= n; ++i) {
    angle = 2.0 * 3.14 * i / n;
    print(wndw / 2 + ray * sin(angle) - 5, wndw / 2 + ray * cos(angle) - 5, i);
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
