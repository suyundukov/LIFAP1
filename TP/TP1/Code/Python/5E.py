#!/usr/bin/python
# Afficher une ligne de longueur N, avec deux étoiles, et N - 2 espaces
print('Donne moi une valeur : ', end='')
foo = int(input())

for i in range(foo):
    if i == 0 or i == foo - 1:
        print('*', end='')
    else:
        print(' ', end='')
