/* Retourner vrai si deux chaînes sont identiques, faux sinon */
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

/* Fonction */

bool chCompare(char c[MAX_SIZE], char c1[MAX_SIZE])
{
  bool n;
  int i;
  
  n = true;
  i = 0;
  
  while (n != false && i < (strlen(c) - 1)) {
    if (c1[i] != c[i]) {
      n = false;
    } else {
      n = true;
    }
    ++i;
  }
  
  return n;
}

/* Utilisatoin */

int main()
{
  char c[MAX_SIZE] = "Marshall";
  char c1[MAX_SIZE] = "Lolipop";
  
  if (chCompare(c, c1)) // Appel de la fonction
    cout << "Vrai";
  else
    cout << "Faux";
  
  cout << endl;
  return 0;
}
