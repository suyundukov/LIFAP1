#!/usr/bin/python
# 1. Afficher le tableau ligne par ligne
# 2. Afficher le tableau colonne par colonne


def aff_par_ligne(tab):
    for i in range(len(tab)):
        for j in range(len(tab[0])):
            print(tab[i][j], '', end='')
        print('\n', end='')


def aff_par_col(tab):
    for i in range(len(tab[0])):
        for j in range(len(tab)):
            print(tab[j][i], '', end='')
        print('\n', end='')


tab = [[1, 2, 3, 4, 5] for i in range(5)]

# Affichage par ligne
print('Affichage ligne par ligne')
aff_par_ligne(tab)

# Affichage par colonne
print('Affichage colonne par colonne')
aff_par_col(tab)
