/* Afficher un motif donné */
#include <iostream>

using namespace std;

int main()
{
  int j;
  
  for (int i = 0; i < 7; ++i) {
    if (i < 4) {
      for (j = 0; j < 3 - i; ++j)
        cout << " ";
    } else {
      for (j = 0; j < i - 3; ++j)
        cout << " ";
    }
    for (int k = 0; k < 7 - j * 2; ++k)
      cout << "*";
    cout << endl;
  }
  
  return 0;
}
