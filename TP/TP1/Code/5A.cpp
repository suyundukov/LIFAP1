/* Afficher N étoiles sur une ligne. N étant demandé à USER */
#include <iostream>

using namespace std;

int main()
{
  int a;
  
  cout << "Combien des étoiles tu veux voir ?\n";
  cin >> a;
  
  for (int i = 0; i < a; ++i) {
    cout << "*";
  }
  
  cout << endl;
  return 0;
}
