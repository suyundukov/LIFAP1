/* Renverser le contenu d'un tableau contenant des caractères */
/* Ex: | A | B | C | D | E | -> | E | D | C | B | A | */
#include <cstring>
#include <iostream>

/* Procédure */

void renverse(char tab[])
{
  char temp;
  
  for (int i = 0; i < (strlen(tab) / 2); ++i) {
    temp = tab[i];
    tab[i] = tab[(strlen(tab) - 1) - i];
    tab[(strlen(tab) - 1) - i] = temp;
  }
}

/* Utilisation */

int main()
{
  char tab[] = {'A', 'B', 'C', 'D', 'E', '\0'};
  
  renverse(tab);
  
  std::cout << tab << std::endl;
  
  return 0;
}
