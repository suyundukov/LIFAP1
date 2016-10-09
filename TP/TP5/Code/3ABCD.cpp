/* 1. Fonction -> Retourner VRAI si la chaîne passée en paramètre contient que
 des majuscule ou miniscule, FAUX sinon */
/* 2. Fonction -> Retourner le nombre d'occurence d'un CHAR dans STRING */
/* 3. Fonction -> Retourner VRAI si les chaînes passées sont des anagramme */
/* Programme principal */
#include <cstring>
#include <iostream>

using namespace std;

const int MAX = 100;

/* Fonction 1 */

bool toutMinMaj(char c[MAX])
{
  bool p;
  float sum;
  long n;
  
  n = strlen(c);
  p = false;
  sum = 0.0;
  
  for (int i = 0; i < n ; ++i) {
    if (c[i] >= 65 && c[i] <= 90) {
      sum += 1.0;
    } else {
      sum += 3.0;
    }
  }
  
  if (sum / n == 1.0 || sum / n == 3.0)
    p = true;
  else
    p = false;
        
  return p;
}

/* Fonction 2 */

int nbrOccur(char c[MAX], char c1)
{
  int n;
  
  n = 0;
  
  for (int i = 0; c[i] != '\0'; ++i) {
    if (c[i] == c1)
      ++n;
  }
  
  return n;
}

/* Fonction 3 */

bool anagram(char c[MAX], char c1[MAX])
{
  bool n;
  
  n = false;
  
  if (strlen(c) == strlen(c1))
    n = true;
  else
    n = false;
  
  if (n) {
    for (int i = 0; c[i] != '\0'; ++i) {
      if (nbrOccur(c, c[i]) == nbrOccur(c1, c[i])) {
        n = true;
      } else {
        n = false;
        break;
      }
    }
  }
  
  return n;
}

/* Utilisation / Programme principal */

int main()
{
  char c[MAX] = "";
  char c1[MAX] = "";
  
  cout << "Donne moi une chaîne : ";
  cin >> c;
  cout << "Donne moi une autre chaîne : ";
  cin >> c1;
  
  while (!toutMinMaj(c) || !toutMinMaj(c1)) {
    cout << "Les chaînes doivent être soit tout en MAJ, soit tout en min.\n";
    cout << "Donne moi une chaîne : ";
    cin >> c;
    cout << "Donne moi une autre chaîne : ";
    cin >> c1;
  }
  
  if (anagram(c, c1))
    cout << "Ces sont des anagrammes !";
  else
    cout << "Nope !!!";
  
  cout << endl;
  return 0;
}
