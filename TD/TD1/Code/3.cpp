/* Informer si le produit est poitif, négatif ou nul, sans le calculer */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;

  cout << "Donne moi premier entier : ";
  cin >> a;
  cout << "Donne moi deuxième entier : ";
  cin >> b;

  if ((a < 0 && b < 0) || (a > 0 && b > 0)) {
    cout << "Le produit est positif !\n";
  } else if (a == 0 || b == 0) {
    cout << "Le produit est nul !\n";
  } else {
    cout << "Le produit est négatif !\n";
  }

  return 0;
}
