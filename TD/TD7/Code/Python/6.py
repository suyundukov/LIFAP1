#!/usr/bin/python
# Remplir deuxième tableau avec la somme des colonnes du 1ère tableau


def remplir_tab(tab, tab1, c, l):
    for i in range(c):
        som = 0
        for j in range(l):
            som += tab[j][i]
        tab1[i] = som


tab = [[1, 2, 3, 4, []],
       [1, 2, 3, 4, []],
       [], [], []]
tab1 = [[] for i in range(len(tab[0]))]

remplir_tab(tab, tab1, 4, 2)

# Affichage de résultat
print(tab1)
