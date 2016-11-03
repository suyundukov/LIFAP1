#!/usr/bin/python
# Calculer et retourner si existent les racines d'un polynôme du 2 degré
from math import sqrt, nan


def racine(a, b, c):
    d = b ** 2 - 4 * a * c

    if d > 0:
        x1 = (-b - sqrt(d)) / (2 * a)
        x2 = (-b + sqrt(d)) / (2 * a)
    elif d == 0:
        x1 = x2 = -b / (2 * a)
    else:
        x1 = x2 = nan

    return x1, x2


print('Donne moi trois valeurs : ', end='')
a = int(input())
b = int(input())
c = int(input())

x1, x2 = racine(a, b, c)

print('x1 = ', x1, '\nx2 = ', x2, sep='')
