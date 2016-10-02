/* Afficher les nombres pairs entre 0 et 20 en utilisant une boucle POUR */
#include <iostream>

using namespace std;

int main()
{
  int i;

  for (i = 0; i <= 20; i += 2) {
    cout << i << " ";
  }

  cout << endl;
  return 0;
}
