/* Afficher une ligne de longueur N, avec deux étoiles, et N - 2 espaces */
#include <iostream>

using namespace std;

int main()
{
  int n;
  
  cout << "Quelle est la longueur de la ligne ?\n";
  cin >> n;
  
  for (int i = 0; i < n; ++i) {
    if (i == 0 || i == n - 1)
      cout << "*";
    else
      cout << " ";
  }
  
  cout << endl;
  return 0;
}
