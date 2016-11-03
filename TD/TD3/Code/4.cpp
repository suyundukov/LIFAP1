/* emander à USER une valeur entre 0 et 20, la retourner après */
#include <iostream>

int retour()
{
  int a;
  
  do {
    std::cout << "Donne moi une valeur entre 0 et 20 : " << std::flush;
    std::cin >> a;
  } while ((a < 1) || (a > 20));
  
  return a;
}

int main()
{
  int a;
  
  a = retour();
  
  std::cout << std::endl;
  
  return 0;
}
