#!/usr/bin/python
# Retourner l'indice de la plus petite valeur contenue dans le tableau


def recherche_min(tab):
    val_min = tab[0]

    for i in range(len(tab)):
        if tab[i] < val_min:
            val_min = tab[i]

    return tab.index(val_min)


tab = [5, 18.5, 13.2, 8.75, 2, 15, 13.5, 6, 17]

# val_min = tab.index(min(tab))  # I ❤ Python
print(recherche_min(tab))
