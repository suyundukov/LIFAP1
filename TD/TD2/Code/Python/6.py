#!/usr/bin/python
# Calculer la somme des chiffres qui composent un nombre
somme = 0

print('Donne moi une valeur : ', end='')
a = int(input())

while a != 0:
    somme += a % 10
    a = int(a / 10)

print('La somme des chiffres est égal à', somme)
