/* Afficher N en enversant l'ordre des chiffres. N est saisi par USER */
#include <iostream>

int main()
{
  int n;
  int temp;
  
  std::cout << "Donne moi une valeur : " << std::flush;
  std::cin >> n;
  
  while (n > 0) {
    temp = n % 10;
    n /= 10;
    std::cout << temp << std::flush;
  }
  
  std::cout << std::endl;
  return 0;
}
