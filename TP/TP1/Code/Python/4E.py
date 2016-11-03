#!/usr/bin/python
# Transformer un entier positif en un nombre de semaines et de jours
print('Donne moi une valeur : ', end='')
foo = int(input())

# I ❤ Python
print(foo, 'jours c\'est', foo // 7, 'semaine(s) et', foo % 7, 'jours')
