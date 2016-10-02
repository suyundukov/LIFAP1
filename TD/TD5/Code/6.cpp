/* Dessiner un dégradé allant du noir au blanc */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{
  int n;
  n = 255;
  
  winInit("Window", wndw, wndw);
  winClear();
  
  for (int i = 0; i < n; ++i) {
    color(i, i, i);
    rectangleFill(2 * i, 0, 2 * i + 1, wndw - 1);
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
