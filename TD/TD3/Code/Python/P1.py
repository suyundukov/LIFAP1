#!/usr/bin/python
# Dessiner le motif donné


def dessine(lngr, rep):
    for i in range(rep):
        for j in range(1, lngr + 1):
            for k in range(j):
                print('*', end='', sep='')
            print('\n', end='')


print('Donne moi la longueur de motif : ', end='')
lngr = int(input())
print('Donne moi le nombre de répétition : ', end='')
rep = int(input())

dessine(lngr, rep)
