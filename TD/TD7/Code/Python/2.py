#!/usr/bin/python
# Remplir un tableau de taille 5 x 5, remplir par USER


def remplir_tab(tab):
    for i in range(len(tab)):
        for j in range(len(tab[0])):
            print('Donne moi une valeur : ', end='')
            tab[i][j] = float(input())


tab = [[0 for x in range(5)] for y in range(5)]

remplir_tab(tab)
