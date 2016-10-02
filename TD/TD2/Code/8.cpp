/* Trouver une valeur choisie aléatoirement par le programme */
#include <cstdlib> // Contient la fonction rand()
#include <iostream>

using namespace std;

int main() 
{
  int a;
  int b;
  int c;

  a = rand() % 100 + 1; // Utilisez % pour donner les limites (hack)
  b = 0;
  
  do {
    cout << "Donne une valeur : ";
    cin >> c;
    if (c > a) {
      cout << "C'est trop\n";
    } else if (c < a) {
      cout << "C'est pas assez\n";
    }
    b++;
  } while (((c < a) || (c >a)) && (b < 6));
  
  if (c == a) {
    cout << "Gagné\n";
  } else {
    cout << "Perdu\n";
  }
  
  return 0;
}
