#!/usr/bin/python
# Calculer la somme des N premiers nombres impairs
somme = 0

print('Donne moi une valeur : ', end='')
a = int(input())

for i in range(1, a * 2, 2):
    somme += i

print('La somme est égal à', somme)
