#!/usr/bin/python
# Remplir troisième tableau, qui contient la moyenne de deux premiers


def rempl_moy_tab(tab, tab1, moy):
    for i in range(len(tab)):
        moy.append(round((tab[i] + tab1[i] * 2) / 3, 2))


tab = [12, 8, 5.5, 14, 13, 10.5]
tab1 = [15, 3, 12, 17, 8, 10]
moy = 5 * []

rempl_moy_tab(tab, tab1, moy)

print(moy)
