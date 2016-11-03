/* Effectuer la permutation de trois variables */
#include <iostream>

/* Procédure */

void permut(int &a, int &b, int &c)
{
  int temp;
  temp = b;
  b = a;
  a = c;
  c = temp;
}

/* Utilisation */

int main()
{
  int a;
  int b;
  int c;
  
  a = 5;
  b = 8;
  c = 2;
  
  permut(a, b, c);
  
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
  
  return 0;
}
