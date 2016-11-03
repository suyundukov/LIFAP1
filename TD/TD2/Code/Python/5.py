#!/usr/bin/python
# Tester si un entier choisi par USER est multiple de 5 ou de 7
print('Donne moi une valeur : ', end='')
a = int(input())

if (a % 5 == 0) and (a % 7 == 0):
    print('C\'est le multiple de 5 et de 7')
elif a % 5 == 0:
    print('C\'est le multiple de 5')
elif a % 7 == 0:
    print('C\'est le multiple de 7')
else:
    print('C\'est ni l\'un ni l\'autre')
