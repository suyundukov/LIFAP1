#!/usr/bin/python
# Afficher la table de multiplication d'un entier
print('Donne moi un entier : ', end='')
a = int(input())

for i in range(1, 11):
    print(a, '*', i, "=", a * i)
