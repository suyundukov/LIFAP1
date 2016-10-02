/* Calculer la somme des N premiers entiers */
#include <iostream>

using namespace std;

int calcSomme(int a)
{
  int b;

  b = 0;

  for (int i = 0; i <= a; ++i) {
    b += i;
  }
  
  // On peut utiliser une autre méthode plus facile //
  // sans boucle POUR , c'est d'utiliser la formule //
  //            b = a * (a + 1) / 2                 //
  // Dans ce cas là il faut juste initialiser b ,   //
  // sans la donnant une valeur !                   //
  
  return b;
}

int main()
{
  int a;
  
  cout << "Donne moi une valeur : ";
  cin >> a;
  
  cout << "La somme de " << a << " premiers entiers est : " << calcSomme(a);
  
  cout << endl;
  return 0;
}
