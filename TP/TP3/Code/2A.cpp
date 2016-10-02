// Permuter trois variables //
#include <iostream>

using namespace std;

void permut(int &a, int &b, int &c) {
  int temp;
  
  temp = a;
  a = b;
  b = c;
  c = temp;
}

int main() {
  int a;
  int b;
  int c;
  
  a = 2;
  b = 5;
  c = 7;
  
  permut(a, b, c);
  
  cout << "a = " << a << "\nb = " << b << "\nc = " << c << endl;
  
  return 0;
}
