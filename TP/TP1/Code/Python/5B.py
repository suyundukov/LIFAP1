#!/usr/bin/python
# Afficher un rectangle de N * M étoiles. N et M étant demandés à USER
print('Donne moi la largeur : ', end='')
foo = int(input())
print('Donne moi la longueur : ', end='')
bar = int(input())

for i in range(foo):
    for j in range(bar):
        print('*', end='')
    print()  # Ici on affiche un saut de ligne
