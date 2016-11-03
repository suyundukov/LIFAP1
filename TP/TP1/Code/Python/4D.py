#!/usr/bin/python
# Afficher la table de multiplication d’un entier choisi par USER
print('Donne moi une valeur : ', end='')
foo = int(input())

for i in range(1, 11):
    print(foo, '*', i, '=', foo * i)
