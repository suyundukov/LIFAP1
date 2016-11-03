#!/usr/bin/python
# Calculer la moyenne de N valeurs saisie par USER
somme = 0

print('Donne moi une valeur : ', end='')
a = int(input())

print('Donne moi des valeurs une par une : ', end='')
for i in range(a):
    x = int(input())
    somme += x

print('La moyenne est égal à', somme / a)
