/* Afficher le triangle de Pascal */
#include "sunlib.hpp"
#include <iostream>

using namespace std;

/* Procédure */

void trianglePascal(int n)
{
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      cout << combin(i, j) << " ";
    }
    cout << endl;
  }
}

/* Utilisation */

int main()
{
  trianglePascal(4);
  
  return 0;
}
