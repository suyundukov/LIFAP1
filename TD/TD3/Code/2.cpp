/* Retourner la moyenne de deux réels A et B donnée en paramètres */
#include <iostream>

using namespace std;

float retour(float a, float b)
{
  float c;
  
  c = (a + b) / 2;
  
  return c;
}

int main()
{
  float a;
  float b;
  
  cout << "Donne moi premier réel : ";
  cin >> a;
  cout << "Donne moi deuxième réel : ";
  cin >> b;
  
  cout << "La moyenne est " << retour(a, b) << endl;
  
  return 0;
}
