/* Afficher un motif donné */
#include <iostream>

int main()
{
  int j;
  
  for (int i = 0; i < 7; ++i) {
    if (i < 4) {
      for (j = 0; j < 3 - i; ++j)
        std::cout << " " << std::flush;
    } else {
      for (j = 0; j < i - 3; ++j)
        std::cout << " " << std::flush;
    }
    for (int k = 0; k < 7 - j * 2; ++k)
      std::cout << "*" << std::flush;
    std::cout << std::endl;
  }
  
  return 0;
}
