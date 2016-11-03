/* Retourner la moyenne de deux réels A et B donnée en paramètres */
#include <iostream>

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
  
  std::cout << "Donne moi premier réel : " << std::flush;
  std::cin >> a;
  std::cout << "Donne moi deuxième réel : " << std::flush;
  std::cin >> b;
  
  std::cout << "La moyenne est " << retour(a, b) << std::endl;
  
  return 0;
}
