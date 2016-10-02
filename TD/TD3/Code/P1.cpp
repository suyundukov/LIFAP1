/* Dessiner le motif donné */
#include <iostream>

using namespace std;

void dessin()
{
  int a;
  int b;
  
  cout << "Donne moi la longueur du motif : ";
  cin >> a;
  cout << "Donne moi le nombre de répétition : ";
  cin >> b;
  
  for (int l = 0; l < b; ++l) {
    for (int i = 1; i <= a; ++i) {
      for (int j = 0; j < i; ++j) {
        cout << "*";
      }
      cout << endl;
    }
  }
}

int main()
{
  dessin();
  
  return 0;
}
