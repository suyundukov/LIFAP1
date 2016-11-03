#!/usr/bin/python
# Remplir le tableau avec le résultat du produit de la ligne par colonne


def table_multip(tab):
    for i in range(len(tab)):
        for j in range(i + 1):
            tab[i][j] = i * j


tab = [[0 for i in range(6)] for j in range(6)]

table_multip(tab)

# Affichage de tableau
for i1 in range(len(tab)):
    for j1 in range(i1 + 1):
        print(tab[i1][j1], '', sep='\t', end='')
    print('')
