/* Afficher une ligne de longueur N, alternant les étoiles et les espaces */
#include <iostream>

using namespace std;

int main()
{
  int n;
  
  cout << "Quelle est la longueur de la ligne ?\n";
  cin >> n;

  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0)
      cout << "*";
    else
      cout << " ";
  }

  cout << endl;
  return 0;
}
