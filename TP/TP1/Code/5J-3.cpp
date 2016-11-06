/* Afficher un motif donné */
#include <iostream>

int main()
{
  for (int i = 0; i < 7; ++i) {
    for (int j = 0; j < 9; ++j) {
      if (j == 4 || i == 3)
        std::cout << "*" << std::flush;
      else
        std::cout << " " << std::flush;
    }
    std::cout << std::endl;
  }
  
  return 0;
}
