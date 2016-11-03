#!/usr/bin/python
# Afficher un triangle de hauteur N ; N étant demandé à USER
print('Donne moi la hauteur du triangle : ', end='')
foo = int(input())

for i in range(foo):
    for j in range(foo - i):
        print('*', end='')
    print()  # Ici on affiche un saut de ligne
