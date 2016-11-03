#!/usr/bin/python
# 1. Retourner VRAI si N est parfait, faux sinon
# 2. Afficher la liste des nombres parfait compris entre 1 et 10 000


def est_parfait(n):
    somme = 0

    for i in range(1, n):
        if n % i == 0:
            somme += i

    if somme == n:
        return True
    else:
        return False


for i in range(10000):
    if est_parfait(i):
        print(i)
