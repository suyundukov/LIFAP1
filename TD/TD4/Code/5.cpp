/* Calculer le nombre de combinaison de P éléments pour un ensemble de N */
#include <iostream>

using namespace std;

/* Fontion de factorielle */

int fact(int n)
{
  if (n == 0) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

/* Fonction */

int combin(int n, int p)
{
  int res;
  
  res = fact(n) / (fact(p) * fact(n - p));
  
  return res;
}

/* Utilisation */

int main()
{
  int n;
  int p;
  
  cout << "Donne moi une valeur : ";
  cin >> n;
  cout << "Donne moi une autre valeur : ";
  cin >> p;
  
  cout << combin(n, p);
  
  cout << endl;
  return 0;
}
