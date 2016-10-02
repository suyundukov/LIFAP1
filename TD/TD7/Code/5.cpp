/* Retourner la plus grand valeur de tableau, et ses indice */
#include <iostream>

using namespace std;

/* Procédure */

void recherchePlusGrand(float tab[5][5], float &max, int &row, int &col)
{
  max = tab[0][0];

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (tab[i][j] > max) {
        max = tab[i][j];
        row = i;
        col = j;
      }
    }
  }
}

/* Utilisation */

int main()
{
  int col;
  float max;
  int row;
  float tab[5][5] = { {1, 2, 3, 4, 5},
    {11, 12, 13, 14, 15},
    {21, 22, 23, 24, 25},
    {31, 32, 33, 34, 35},
    {41, 42, 43, 44, 45} };
  
  recherchePlusGrand(tab, max, row, col);
  
  cout << "La valeur la plus grand est " << max << endl;
  cout << "Elle se trouve dans tab["<< row << "][" << col << "]\n";
  
  return 0;
}
