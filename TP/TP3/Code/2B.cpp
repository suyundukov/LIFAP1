// Tester nombre de combinaison //
#include <iostream>

using namespace std;

double fact(int a) {
  int f = 1;
  
  for (int i = 1; i <= a; ++i) {
    f = f * i;
  }
  
  return f;
}

int combi_func(int n, int p) {
  int res;
  
  res = fact(n) / (fact(p) * fact(n - p));
  
  return res;
}

void combi_proc(int n, int p, int &res) {
  res = fact(n) / (fact(p) * fact(n - p));
}

int main() {
  int a;
  int b;
  int c;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  cout << "Donne moi une autre valeur : ";
  cin >> b;
  
  // Utilisant fonction
  cout << "Utilisant fonction : " << combi_func(a, b) << endl;
  
  // Utiliant procŽdure
  combi_proc(a, b, c);
  cout << "Utilisant procŽdure : " << c << endl;
  
  return 0;
}
