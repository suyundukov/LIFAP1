/* Afficher un motif donné */
#include <iostream>

int main()
{
  for (int i = 0; i < 9; ++i) {
    if (i < 5)
      for (int j = 0; j < i + 1; ++j)
        std::cout << "*" << std::flush;
    else
      for (int j = 0; j < 9 - i; ++j)
        std::cout << "*" << std::flush;
    std::cout << std::endl;
  }
  
  return 0;
}
