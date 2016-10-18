/* Dessiner un cercle dont le rayon et le caractère sont passées en paramètre */
#include <Grapic.h>
#include <cmath>

using namespace grapic;

const int size = 500;

/* Procédure */

void dessineCercleCar(int r, char c[1]) {
  float dist;
  
  for(int i = 0; i < size; i += 10) {
    for(int j = 0; j < size; j += 10) {
      dist = sqrt(pow(i - size / 2, 2) + pow(j - size / 2, 2));
      if (dist <= r) {
        color(255, 0, 0);
        print(i, j, c);
      }
    } 
  }
}

/* Utilisation */

int main()
{
  winInit("Grille d'images", size, size);
  backgroundColor(255, 255, 255);
  winClear();
  char c[1] = {'*'};
  
  dessineCercleCar(200, c); // <- Appel à la procédure
  
  winDisplay();
  pressSpace();
  winQuit();
  
  return 0;
}
