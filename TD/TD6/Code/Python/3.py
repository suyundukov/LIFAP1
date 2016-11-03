#!/usr/bin/python
# Afficher les valeurs contenues dans le tableau


def affiche_tab(tab):
    for i in range(len(tab)):
        print(tab[i], ' | ', sep='', end='')


tab = [12, 18.5, 13.2, 8.75, 16, 15, 13.5, 12, 17]

# print(tab)  # I ❤ Python
affiche_tab(tab)
