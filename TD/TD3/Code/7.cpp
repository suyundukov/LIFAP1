/* Dessiner un carré de côté N à l'écran */
#include <iostream>

using namespace std;

void dessin(int a, char c)
{
  for (int i = 1; i <= a; ++i) {
    for (int j = 1; j <= a; ++j) {
      if (i == 1 || i == a || j == 1 || j == a) {
        cout << c;
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
}

int main ()
{
  int a;
  char c;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  cout << "Donne moi un caractere : ";
  cin >> c;
  
  dessin(a, c);
  
  return 0;
}
