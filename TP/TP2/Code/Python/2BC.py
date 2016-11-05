#!/usr/bin/python
# 1. Tirer aléatoirement une valeur et de la retourner au programme principal
# 2. Faire deviner au joueur la valeur choisie par l’ordinateur
from random import randrange


def return_random():
    return randrange(10)  # I ❤ Python


i = 0
foo = return_random()
bar = 666

while foo != bar and i < 5:
    print('Donne moi une valeur : ', end='')
    bar = int(input())
    i += 1

if foo == bar:
    print('Gagné')
else:
    print('Perdu')
