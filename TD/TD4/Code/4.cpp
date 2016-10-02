/* 1. Fonction -> Retourner le perimetre d'un cercle */
/* 2. Fonction -> Retourner l'aire d'un cercle       */
/* 3. Sous-programme -> Utliser ces deux fonction    */
#include <iostream>

using namespace std;

/* Fonction 1 */

float perimCercle(int ray)
{
  float pi;
  float per;
  
  pi = 3.14;
  per = 2 * pi * ray;
  
  return per;
}

/* Fonction 2 */

float aireCercle(int ray)
{
  float pi;
  float air;
  
  pi = 3.14;
  air = pi * ray * ray;
  
  return air;
}

/* Procédure */

void sousProg(int ray, float &per, float &air)
{
  per = perimCercle(ray);
  air = aireCercle(ray);
}

/* Utilisation */

int main()
{
  int ray;
  float per;
  float air;
  
  cout << "Donne moi une valeur : ";
  cin >> ray;
  
  sousProg(ray, per, air);
  
  cout << "Le perimetre est " << per << "\nLa surface est " << air << endl;
  
  return 0;
}
