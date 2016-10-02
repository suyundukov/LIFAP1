/* Calculer la somme des N premières puissances de 2 */
#include <cmath> // Contient la fonction pow()
#include <iostream>

using namespace std;

/* Fonction */

int somme(int a)
{
  int sum;

  sum = 0;

  for (int i = 0; i < a; ++i) {
    sum += pow(2, i);
  }
  return sum;
}

/* Utilisation */

int main()
{
  int n;

  cout << "Donne moi une valeur : ";
  cin >> n;

  cout << "La somme de " << n << " premiers puissance de 2 est " << somme(n);

  cout << endl;
  return 0;
}
