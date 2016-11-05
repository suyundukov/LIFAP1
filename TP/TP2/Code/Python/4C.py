#!/usr/bin/python
# Afficher N en enversant l'ordre des chiffres. N est saisi par USER
print('Donne moi une valeur : ', end='')
foo = int(input())

while foo > 0:
    temp = foo % 10
    foo //= 10  # I ❤ Python
    print(temp, end='')
