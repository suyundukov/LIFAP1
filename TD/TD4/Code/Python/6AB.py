#!/usr/bin/python
# 1. Calculer la somme des diviseurs et leur produit
# 2. Retourner VRAI, si entier est un doublon, FAUX sinon


def somme_produit(foo):
    somme = 0
    prod = 1
    for i in range(1, foo + 1):
        if foo % i == 0:
            somme += i
            prod *= i
    return somme, prod


def est_doublon(foo):
    somme, prod = somme_produit(foo)
    res = True if prod % somme == 0 else False
    return res


print('Donne moi une valeur : ', end='')
foo = int(input())
print('Oui' if est_doublon(foo) else 'Non')
