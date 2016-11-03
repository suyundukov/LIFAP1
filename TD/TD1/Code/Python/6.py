#!/usr/bin/python
# Simuler le fonctionnement d'une calculatrice simple
print('Donne moi une première valeur : ', end='')
a = int(input())
print('Donne moi une deuxième valeur : ', end='')
b = int(input())
print('Choisie une opération : + , -, *, / : ', end='')
c = str(input())

if c == '+':
    print(a, '+', b, '=', a + b)
elif c == '-':
    print(a, '-', b, '=', a - b)
elif c == '*':
    print(a, '*', b, '=', a * b)
elif c == '/':
    #  Division par zéro
    if b == 0:
        print('Opération impossible')
    else:
        print(a, '/', b, '=', a / b)
else:
    print('Une erreur inconnue est survenue')
