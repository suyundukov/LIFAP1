/* 1. Fonction -> Retourner VRAI si la chaîne passée en paramètre contient que
 des majuscule ou miniscule, FAUX sinon */
/* 2. Fonction -> Retourner le nombre d'occurence d'un CHAR dans STRING */
/* 3. Fonction -> Retourner VRAI si les chaînes passées sont des anagramme */
/* Programme principal */
#include <cstring>
#include <iostream>

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
  
  for (int i = 0; i < n ; ++i)
    if (c[i] >= 65 && c[i] <= 90)
      sum += 1.0;
    else
      sum += 3.0;
  
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
  
  for (int i = 0; c[i] != '\0'; ++i)
    if (c[i] == c1)
      ++n;
  
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
  
  if (n)
    for (int i = 0; c[i] != '\0'; ++i)
      if (nbrOccur(c, c[i]) == nbrOccur(c1, c[i])) {
        n = true;
      } else {
        n = false;
        break;
      }
  
  return n;
}

/* Utilisation / Programme principal */

int main()
{
  char c[MAX] = "";
  char c1[MAX] = "";
  
  std::cout << "Donne moi une chaîne : " << std::flush;
  std::cin >> c;
  std::cout << "Donne moi une autre chaîne : " << std::flush;
  std::cin >> c1;
  
  while (!toutMinMaj(c) || !toutMinMaj(c1)) {
    std::cout << "Les chaînes doivent être soit tout en MAJ,
                  soit tout en min." << std::endl;
    std::cout << "Donne moi une chaîne : " << std::flush;
    std::cin >> c;
    std::cout << "Donne moi une autre chaîne : " << std::flush;
    std::cin >> c1;
  }
  
  if (anagram(c, c1))
    std::cout << "Ces sont des anagrammes !" << std::endl;
  else
    std::cout << "Nope !!!" << std::endl;
  
  return 0;
}
