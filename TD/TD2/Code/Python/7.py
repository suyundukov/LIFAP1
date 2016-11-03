#!/usr/bin/python
# Calculer les racines rééles d'un polymer du second degré
from math import sqrt

print('Donne moi trois entiers, un par un : ', end='')
a = float(input())
b = float(input())
c = float(input())

d = b * b - 4 * a * c

if d < 0:
    print('Pas de racine réels.')
elif d == 0:
    print('Une racine double', -b / (2 * a))
else:
    print((-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a))
