/* Effectuer la permutation de trois variables */
#include <iostream>

using namespace std;

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
  
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;
  
  return 0;
}
