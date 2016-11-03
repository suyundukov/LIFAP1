#!/usr/bin/python
# Calculer la somme des N première puissances de 2
somme = 0

print('Donne moi une valeur : ', end='')
a = int(input())

for i in range(a):
    somme += pow(i, 2)  # Ou on peut utiliser 'somme += i ** 2'

print('La somme est', somme)
