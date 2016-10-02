/* Tirer aléatoirement une valeur et de la retourner au programme principal */
#include <cstdlib> // Contient la fonction rand()
#include <ctime> // Contient la fonction srand()
#include <iostream>

using namespace std;

/* Fonction */

int ran_val()
{
  int a;

  srand(time(NULL));

  a = (rand() % 15) + 10; // Les bornes entre 15 et 25

  return a;
}

/* Utilisation */

int main()
{
  cout << ran_val() << endl;

  return 0;
}
