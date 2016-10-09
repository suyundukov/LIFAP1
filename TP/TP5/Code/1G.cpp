/* Proposer à USER le menu et appeler les différents sous-programmes */
#include "menuApp.h"
#include <iostream>

using namespace std;

/* Utilisatoin */

int main()
{
  char choix;
  
  do {
    choix = menu();
    
    switch (choix) {
      case '1':
        afficheChaine();
        break;
      case '2':
        mirroirChaine();
        break;
      case '3':
        concatChaine();
        break;
      case '4':
        compareChaine();
        break;
      case '5': // Cas pour sortir de la boucle
        break;
        
      default:
        cout << "Une erreur inconnue. Recommence" << endl;
    }
    cout << endl;
  } while (choix != '5');
  
  return 0;
}
