/* Effectuer le codage de césar */
#include <iostream>

/* Procédure */

void codageCesar(char c[], int n) // N est la distance fixe
{
  for (int i = 0; c[i] != '\0'; ++i) {
    
    // Condition pour les majuscules
    if (c[i] >= 65 && c[i] <= 90) {
    	if (c[i] + n > 91)
      	c[i] = 64 + ((c[i] + n) - 90);
    	else
      	c[i] = c[i] + n;
    }
    
    // Condition pour les minuscules
    if (c[i] >= 97 && c[i] <= 122) {
      if (c[i] + n > 123)
        c[i] = 96 + ((c[i] + n ) - 122);
      else
        c[i] = c[i] + n;
    }
    
  }
}

/* Utilisation */

int main()
{
  char c[] = "zesar";
  
  codageCesar(c, 3);
  
  std::cout << c << std::endl;
  
  return 0;
}
