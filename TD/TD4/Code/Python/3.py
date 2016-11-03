#!/usr/bin/python
# Effectuer la division euclidienne de deux entiers


def division(foo, bar):
    q = 0  # Le quotient de division
    r = foo  # LE reste de la division

    while r >= bar:
        q += 1
        r -= bar

    # I ❤ Python #
    # q = foo // bar #
    # r = foo % bar #

    return q, r


print('Donne moi deux valeurs : ', end='')
foo = int(input())  # La valeur à diviser (numérateur)
bar = int(input())  # Le dénominateur

q, r = division(foo, bar)

print('Le quotient de la division est :', q,
      'et le reste est :', r)
