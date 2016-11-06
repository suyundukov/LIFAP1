/* Affichez le Nème terme de la suite de Fibonacci */
/* N.B. La suite de Fibonacci : 1 1 2 3 5 8 13 24  */
#include <iostream>

/* Procédure */

int fib(int x)
{
  int a;
  int b;
  int c;

  a = 0;
  b = 1;
  c = 1;

  for (int i = 0; i < x; ++i) {
    a = b;
    b = c;
    c = a + b;
  }

  return c;
}

/* Fonction */

int main()
{
  int a;

  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;

  std::cout << fib(a) << std::endl;

  return 0;
}
