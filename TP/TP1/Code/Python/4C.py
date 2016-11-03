#!/usr/bin/python
# Saisir une valeur entre deux bornes choisies par l’utilisateur
print('Donne moi une valeur : ', end='')
foo = int(input())

while foo < 0 or foo > 20:
    print('La valeur doit être entre 0 et 20. Recommence : ', end='')
    foo = int(input())
