/* Afficher un triangle de hauteur N ; N étant demandé à USER */
#include <iostream>

using namespace std;

int main()
{
  int a;
  
  cout << "Quelle est la hauteur de triangle ?\n";
  cin >> a;
  
  for (int i = 0; i < a; ++i) {
    for (int j = 0; j <= i; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}
