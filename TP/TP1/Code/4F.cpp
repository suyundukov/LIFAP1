/* Programmer une calculatrice proposant les opérations classiques */
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  char c;
  
  cout << "Saisi une valeur : ";
  cin >> a;
  cout << "Saisi une deuxième valeur : ";
  cin >> b;
  cout << "Choisi un operateur parmi : '+' , '-' , '*' et '/' ";
  cin >> c;
  
  switch (c) {
  case '+':
    cout << a << " + " << b << " = " << a + b;
    break;
  case '-':
    cout << a << " - " << b << " = " << a - b;
    break;
  case '*':
    cout << a << " * " << b << " = " << a * b;
    break;
  case '/':
    cout << a << " / " << b << " = " << a / b;
    break;
  default:
    cout << "Unknown error !";
  }
  
  cout << endl;
  return 0;
}
