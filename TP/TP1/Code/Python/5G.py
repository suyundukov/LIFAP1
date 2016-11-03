#!/usr/bin/python
# Afficher une ligne de longueur N, alternant les étoiles et les espaces
print('Donne moi une valeur : ', end='')
foo = int(input())

for i in range(foo):
    if i % 2 == 0:
        print('*', end='')
    else:
        print(' ', end='')
