/* Dessiner une série de N lignes verticales, allant de y = 0 à y = cos(x) */
#include <Grapic.h>

using namespace grapic;

const int wndw = 500;

int main()
{
  int y;
  
  winInit("Ligne", wndw, wndw);
  winClear();
  
  for (int i = 0; i < wndw; i += 3) {
    y = (0.5 * wndw) + 0.5 * wndw * cos(0.05 * i);
    line(i, 0, i, y);
  }
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
