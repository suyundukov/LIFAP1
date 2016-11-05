#!/usr/bin/python
# 1. Calculer et Retourner la factorielle d'un nombre
# 2. Afficher les 15 premières valeurs des factorielles


def fact(foo):
    if foo == 0:
        return 1
    else:
        return foo * fact(foo - 1)


for i in range(15):
    print(i, '! = ', fact(i), sep='')
