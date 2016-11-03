#!/usr/bin/python
# Afficher un motif donné
for i in range(7):
    if i < 4:
        for j in range(4 - i):
            print(' ', end='')
    else:
        for j in range(i - 2):
            print(' ', end='')
    for k in range(7 - j * 2):
        print('*', end='')
    print()  # Ici on affiche un saut de ligne
