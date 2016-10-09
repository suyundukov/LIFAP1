/* 1. Procédure -> Constituer une nouvelle chaîne de caractère */
/* EX: laval -> llaav ; 12345 ->  15243 ; ABCDEF -> AFBECD */
/* 2. Fonction -> Verifier si une chaîne passée est palindrome ou pas */
/* Programme principal */
#include <cstring>
#include <iostream>

using namespace std;

const int MAX = 100;

/* Procédure */

void premDer (char c[MAX], char c1[MAX])
{
  int j;
  long n;
  
  j = 0;
  n = strlen(c);
  
  for (int i = 0; i <= n / 2; ++i) {
    c1[j] = c[i];
    c1[j+1] = c[n - 1 - i];
    j += 2;
  }
  
  c1[n] = '\0';
}

/* Fonction */

bool estPalin(char c[MAX])
{
  char c1[MAX] = "";
  bool p;
  long n;
  
  n = strlen(c);
  p = false;
  
  premDer(c, c1);
  
  if (n % 2 == 0) {
    for (int i = 0; i < n; i += 2) {
      if (c1[i] == c1[i + 1]) {
        p = true;
      } else {
        p = false;
        break;
      }
    }
  } else {
    for (int i = 0; i < n - 1; i += 2) {
      if (c1[i] == c1[i + 1]) {
        p = true;
      } else {
        p = false;
        break;
      }
    }
  }
  
  return p;
}

/* Utilisation / Programme principal */

int main()
{
  char c[MAX] = "";

  cout << "Donne moi une chaîne de caractère : ";
  cin >> c;
  
  if (estPalin(c))
    cout << "Vrai";
  else
    cout << "Faux";
  
  cout << endl;
  return 0;
}
