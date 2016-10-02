/* Faire deviner au joueur la valeur choisie par l’ordinateur */
#include <cstdlib> // Contient la fonction rand()
#include <ctime> // Contient la fonction srand()
#include <iostream>

using namespace std;

/* Fonction */

int ran_val()
{
  int a;

  srand(time(NULL));

  a = (rand() % 15) + 10;

  return a;
}

/* Utilisation */

int main() {
  int a;
  int b;
  int aleat;

  b = 0;
  aleat = ran_val();

  do {
    cout << "Donne moi une valeur : ";
    cin >> a;
    ++b;
  } while (((a < aleat) || (a > aleat)) && (b < 5));

  if (a == aleat)
    cout << "Gagné !";
  else
    cout << "Perdu (";

  return 0;
}
