#!/usr/bin/python
# Demander à USER une valeur entre 0 et 20, la retourner après


def retour():
    print('Donne moi une valeur entre 0 et 20 : ', end='')
    val = int(input())

    while val < 0 or val > 20:
        print('La valeur doit être entre 0 et 20. Recommence : ', end='')
        val = int(input())

    return val


retour()
