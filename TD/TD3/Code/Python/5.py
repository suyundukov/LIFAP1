#!/usr/bin/python
# Calculer la somme des N premiers entiers


def calc_somme(n):
    somme = 0

    for i in range(n + 1):
        somme += i

    # On peut utiliser une autre méthode plus facile #
    # sans boucle POUR , c'est d'utiliser la formule #
    #            somme = n * (n + 1) / 2             #
    #                      FIN!                      #

    return somme


print('Donne moi une valeur : ', end='')
val = int(input())

print('La somme de', val, 'premiers entiers',
      'est', calc_somme(val))
