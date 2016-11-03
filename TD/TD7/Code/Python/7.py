#!/usr/bin/python
# Remplir un tableau avec les coefficients du triangle de Pascal
from math import factorial as fact


def combin(n, p):
    res = int(fact(n) / (fact(p) * fact(n - p)))
    return res


def triangle_pascal(tab):
    for i in range(len(tab)):
        for j in range(i + 1):
            tab[i][j] = combin(i, j)


tab = [[[] for i in range(6)] for j in range(6)]

triangle_pascal(tab)

# Affichage de tableau
for k in range(len(tab)):
    for m in range(k + 1):
        print(tab[k][m], '', sep='\t', end='')
    print('')
