#!/usr/bin/python
# Calculer la somme des valeurs du tableau


def somme_tab(tab):
    somme = 0

    for i in range(len(tab)):
        somme += tab[i]

    return somme


tab = [5, 18.5, 13.2, 8.75, 2, 15, 13.5, 6, 17]

print(somme_tab(tab))
