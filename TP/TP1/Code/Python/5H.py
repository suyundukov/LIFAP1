#!/usr/bin/python
# Afficher un damier de taille N * M
print('Donne moi la hauteur : ', end='')
foo = int(input())
print('Donne moi la longeur : ', end='')
bar = int(input())

for i in range(foo):
    for j in range(bar):
        if (i % 2 == 0 and j % 2 == 0) or (i % 2 != 0 and j % 2 != 0):
                print('*', end='')
        else:
                print(' ', end='')
    print()  # Ici on affiche un saut de ligne
