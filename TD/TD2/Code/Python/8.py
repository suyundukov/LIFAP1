#!/usr/bin/python
# Trouver une valeur choisie aléatoirement par le programme
from random import randint

c = 0
i = 0
r = randint(1, 100)

while c != r and i < 6:
    print('Donne moi une valeur : ', end='')
    c = int(input())
    if c < r:
        print('C\'est pas assez !')
    elif c > r:
        print('C\'est trop !')
    i += 1

if c == r:
    print('Gagné !')
else:
    print('Perdu !')
