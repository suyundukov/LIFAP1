#!/usr/bin/python
# Calculer la somme des N premières puissances de 2
from math import pow


def sum_pow(val):
    sum_val = 0

    for i in range(val):
        sum_val += pow(2, i)  # I ❤ Python : sum_val += 2 ** i

    return sum_val


print('Donne moi une valeur : ', end='')
foo = int(input())

print('La somme de', foo, 'première puissance de 2 est', sum_pow(foo))
