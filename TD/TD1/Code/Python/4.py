#!/usr/bin/python
# Demander un entier entre les bornes imposées
print('Donne moi un entier entre 1 et 31 : ', end='')
a = int(input())

while a < 1 or a > 31:
    print('Il faut un entier entre 1 et 31 : ', end='')
    a = int(input())

print('Tout est OK !')
