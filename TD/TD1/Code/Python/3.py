#!/usr/bin/python
# Informer si le produit est poitif, négatif ou nul, sans le calculer #
print('Donne moi premier entier : ', end='')
a = int(input())
print('Donne moi deuxième entier : ', end='')
b = int(input())

if (a > 0 and b > 0) or (a < 0 and b < 0):
    print('Le produit est positif !')
elif (a == 0 or b == 0):
    print('Le produit est nulle !')
else:
    print('Le produit est négatif !')
