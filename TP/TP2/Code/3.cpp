/* Affichez le Nème terme de la suite de Fibonacci */
/* N.B. La suite de Fibonacci : 1 1 2 3 5 8 13 24  */
#include <iostream>

using namespace std;

/* Procédure */

void fib(int x)
{
  int a;
  int b;

  a = 1;
  b = 0;

  for (int i = 0; i < x; ++i) {
    a = a + b;
    b = b + a;
    cout << a << " " << b << " ";
  }
}

/* Fonction */

int main()
{
  int a;

  cout << "Donne moi une valeur : ";
  cin >> a;

  fib(a);

  return 0;
}
