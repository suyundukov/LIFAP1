/* Afficher un motif donné */
#include <iostream>

using namespace std;

int main() //FIXME: Réecrire le code
{
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 3 - i; ++j) {
      cout << " ";
    }
    for (int k = 0; k < 2 * i + 1; ++k) {
      cout << "*";
    }
    cout << endl;
  }
  
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << " ";
    }
    for (int k = 0; k < 5 - i * 2; ++k) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}
