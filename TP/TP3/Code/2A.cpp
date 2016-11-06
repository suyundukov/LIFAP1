// Permuter trois variables //
#include <iostream>

void permut(int &a, int &b, int &c) {
  int temp;
  
  temp = a;
  a = b;
  b = c;
  c = temp;
}

int main()
{
  int a;
  int b;
  int c;
  
  a = 2;
  b = 5;
  c = 7;
  
  permut(a, b, c);
  
  // Debug
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
  
  return 0;
}
