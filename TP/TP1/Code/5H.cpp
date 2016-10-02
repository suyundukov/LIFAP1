/* Afficher un damier de taille N * M */
#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;
  
  cout << "Quelle est la longueur de la ligne ?\n";
  cin >> n;
	cout << "Quelle est la hauteur du rectangle ?\n";
  cin >> m;
  
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
