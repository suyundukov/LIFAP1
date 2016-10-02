/* Dessiner un dégradé de cercles allant du noir au rouge */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{
  int n;
  int ray;
  
  n = 255;
  ray = 200;
  
  winInit("Window", wndw, wndw);
  winClear();
  
  for (int i = 0; i < n; ++i) {
    color(i, 0, 0);
    circleFill(wndw / 2, wndw / 2, ray - i);
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
