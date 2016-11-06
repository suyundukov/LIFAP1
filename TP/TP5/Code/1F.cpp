/* Proposer à USER toutes les opèrations possibles et retourner un entier */
#include <iostream>

/* Fonction */

int menu()
{
  int choix;
  
  std::cout << "Choisissez parmi les possibilités suivant :" << std::endl;
  std::cout << "1. Saisir et afficher une chaîne de caractères" << std::endl;
  std::cout << "2. Modifier une chaîne de caractères en son mirroir" << std::endl;
  std::cout << "3. Concatèner deux chaîne de caractères" << std::endl;
  std::cout << "4. Comparer deux chaîne de caractère" << std::endl;
  std::cin >> choix;
  
  return choix;
}

/* Utilisatoin */

int main()
{
  menu();  // Debug
  
  std::cout << std::endl;
  return 0;
}
