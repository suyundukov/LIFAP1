#!/usr/bin/python
# Dessiner un carré de côté N à l'écran


def dessine_carre(nmbr, car):
    for i in range(1, nmbr + 1):
        for j in range(1, nmbr + 1):
            if i == 1 or j == 1 or i == nmbr or j == nmbr:
                print(car, end='', sep='')
            else:
                print(' ', end='', sep='')
        print('\n', end='')


print('Donne moi une valeur : ', end='')
val = int(input())
print('Donne moi un caractère : ', end='')
car = input()

dessine_carre(val, car)
