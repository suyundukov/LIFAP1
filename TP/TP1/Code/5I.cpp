/* Afficher un damier de taille N * M, USER choisi le caractère */
#include <iostream>

using namespace std;

int main()
{
  int n;
  int m;
  char c;
  
  cout << "Quelle est la longueur de la ligne ?\n";
  cin >> n;
	cout << "Quelle est la hauteur du rectangle ?\n";
  cin >> m;
  cout << "Quelle est le caractère souhaité ?\n";
  cin >> c;
  
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
        cout << c;
      else
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
