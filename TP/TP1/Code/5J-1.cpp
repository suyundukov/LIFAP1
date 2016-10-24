/* Afficher un motif donné */
#include <iostream>

using namespace std;

int main()
{
  for (int i = 0; i < 9; ++i) {
    if (i < 5)
      for (int j = 0; j < i + 1; ++j)
        cout << "*";
    else
      for (int j = 0; j < 9 - i; ++j)
        cout << "*";
    cout << endl;
  }
  
  return 0;
}
