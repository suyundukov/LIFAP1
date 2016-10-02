/* Afficher un rectangle de N * M étoiles. N et M étant demandés à USER */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  
  cout << "Quelles sont les dimensions du rectangle : longueur ?\n";
  cin >> a;
  cout << "Largeur ?\n";
  cin >> b;
  
  for (int i = 0; i < b; ++i) {
    for (int j = 0; j < a; ++j) {
      cout << "*";
    }
    cout << endl;
  }
  
  return 0;
}
