// Tester nombre de combinaison //
#include <iostream>

double fact(int a) {
  int f;

  f = 1;
  
  for (int i = 1; i <= a; ++i)
    f = f * i;
  
  return f;
}

int combinFunc(int n, int p) {
  int res;
  
  res = fact(n) / (fact(p) * fact(n - p));
  
  return res;
}

void combinProc(int n, int p, int &res) {
  res = fact(n) / (fact(p) * fact(n - p));
}

int main()
{
  int a;
  int b;
  int c;
  
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi une autre valeur : " << std::flush;
  std::cin >> b;
  
  // Utilisant fonction
  std::cout << "Utilisant fonction : " << combinFunc(a, b) << std::endl;
  
  // Utiliant procédure
  combinProc(a, b, c);
  std::cout << "Utilisant procédure : " << c << std::endl;
  
  return 0;
}
