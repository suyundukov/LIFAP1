#!/usr/bin/python
# Retourner la moyenne de deux réels A et B donnée en paramètres


def retour(a, b):
    return (a + b) / 2


print('Donne moi la première valeur : ', end='')
a = float(input())
print('Donne moi la deuxième valeur : ', end='')
b = float(input())

print('La moyenne de ces deux valeurs est', retour(a, b))
