/* Afficher un motif donné */
#include <iostream>

using namespace std;

int main()
{
  for (int i = 0; i < 7; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (j == 4 || i == 3)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  
  return 0;
}
