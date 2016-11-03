#!/usr/bin/python
# Afficher un damier de taille N * M, USER choisi le caractère
print('Donne moi la hauteur : ', end='')
foo = int(input())
print('Donne moi la largeur : ', end='')
bar = int(input())
print('Donne moi le caractère : ', end='')
baz = str(input())

for i in range(foo):
    for j in range(bar):
        if (i % 2 == 0 and j % 2 == 0) or (i % 2 != 0 and j % 2 != 0):
            print(baz, end='')
        else:
            print(' ', end='')
    print()  # Ici on affiche un saut de ligne
