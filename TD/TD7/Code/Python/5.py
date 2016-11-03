#!/usr/bin/python
# Retourner la plus grand valeur de tableau, et ses indice


def plus_grand(tab):
    val_max = tab[0][0]
    ind_col = None
    ind_ligne = None

    for i in range(len(tab)):
        for j in range(len(tab[0])):
            if tab[i][j] > val_max:
                val_max = tab[i][j]
                ind_col = i
                ind_ligne = j

    return val_max, ind_col, ind_ligne


tab = [[1, 2, 3, 4, 5],
       [11, 12, 13, 14, 15],
       [16, 17, 100, 19, 20],
       [21, 22, 23, 24, 25],
       [26, 99, -24, 64, 2.5]]

# I ❤ Python
'''
val_max, col, ligne = max((item, i, j)
                          for i, row in enumerate(tab)
                          for j, item in enumerate(row)
                          )
'''

val_max, col, ligne = plus_grand(tab)
print('La valeur maximale est :', val_max)
print('Elle se trouve dans tab [', col, '][', ligne, ']', sep='')
