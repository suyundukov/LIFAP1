/* Dessiner un cercle dont le rayon et le caractère sont passées en paramètre */
#include <Grapic.h>
#include <cmath>

using namespace grapic;

const int DIMW = 500;

/* Procédure */

void dessineCercleCar(int r, char c[1]) {
  float dist;
  
  for(int i = 0; i < DIMW; i += 10)
    for(int j = 0; j < DIMW; j += 10) {
      dist = sqrt(pow(i - DIMW / 2, 2) + pow(j - DIMW / 2, 2));
      if (dist <= r) {
        color(255, 0, 0);
        print(i, j, c);
      }
    } 
}

/* Utilisation */

int main()
{
  char c[1] = {'*'};

  winInit("Grille d'images", DIMW, DIMW);
  backgroundColor(255, 255, 255);
  winClear();
  
  dessineCercleCar(200, c); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
