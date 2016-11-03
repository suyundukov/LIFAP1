#!/usr/bin/python
# Afficher le contour d'un rectangle de taille N * M
print('Donne moi la longueur : ', end='')
foo = int(input())
print('Donne moi la hauteur : ', end='')
bar = int(input())

for i in range(bar):
    for j in range(foo):
        if i == 0 or i == bar - 1:
            print('*', end='')
        else:
            if j == 0 or j == foo - 1:
                print('*', end='')
            else:
                print(' ', end='')
    print()  # Ici on affiche un saut de ligne
