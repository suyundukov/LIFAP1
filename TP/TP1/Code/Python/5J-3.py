#!/usr/bin/python
# Afficher un motif donné
for i in range(7):
    for j in range(9):
        if j == 4 or i == 3:
            print('*', end='')
        else:
            print(' ', end='')
    print('')  # Ici on affiche un saut de ligne
