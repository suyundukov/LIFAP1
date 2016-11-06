/* Faire deviner au joueur la valeur choisie par l’ordinateur */
#include <cstdlib> // Contient la fonction rand()
#include <ctime> // Contient la fonction srand()
#include <iostream>

/* Fonction */

int ran_val()
{
  int a;

  srand(static_cast<unsigned int>(time(NULL)));

  a = (rand() % 15) + 10;

  return a;
}

/* Utilisation */

int main()
{
  int a;
  int b;
  int aleat;

  b = 0;
  aleat = ran_val();

  do {
    std::cout << "Donne moi une valeur : " << std::flush;
    std::cin >> a;
    ++b;
  } while (a != aleat && b < 5);

  if (a == aleat)
    std::cout << "Gagné !" << std::endl;
  else
    std::cout << "Perdu (" << std::endl;

  return 0;
}
