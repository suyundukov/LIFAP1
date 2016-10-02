/* Afficher les nombres pairs entre 0 et 20 en utilisant une boucle TANT QUE */
#include <iostream>

using namespace std;

int main()
{
  int i = 0;

  while (i <= 20) {
    cout << i << " ";
    i += 2;
  }

  cout << endl;
  return 0;
}
