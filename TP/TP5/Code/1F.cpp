/* Proposer à USER toutes les opèrations possibles et retourner un entier */
#include <iostream>

using namespace std;

/* Fonction */

int menu()
{
  int choix;
  
  cout << "Choisissez parmi les possibilités suivant :\n";
  cout << "1. Saisir et afficher une chaîne de caractères\n";
  cout << "2. Modifier une chaîne de caractères en son mirroir\n";
  cout << "3. Concatèner deux chaîne de caractères\n";
  cout << "4. Comparer deux chaîne de caractère\n";
  cin >> choix;
  
  return choix;
}

/* Utilisatoin */

int main()
{
  cout << menu(); // Appel de la fonction
  
  cout << endl;
  return 0;
}
