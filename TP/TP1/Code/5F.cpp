/* Afficher le contour d'un rectangle de taille N * M */
#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;
  
  cout << "Quelle est la largeur du rectangle ?\n";
  cin >> n;
	cout << "Quelle est la hauteur du rectangle ?\n";
  cin >> m;
  
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }

  cout << endl;
  return 0;
}
