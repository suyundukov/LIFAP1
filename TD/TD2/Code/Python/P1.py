#!/usr/bin/python
# Vérifier si un entier est premier ou non
from math import sqrt

b = True

print('Donne moi un entier : ', end='')
a = int(input())

for i in range(2, int(sqrt(a)) + 1, 1):
    if a % i == 0:
        b = False

if b:
    print(a, ' est un nombre premier.', end='')
else:
    print(a, 'n\'est pas un nombre premier.', end='')
