#!/usr/bin/python
# 1. Procédure -> Afficher N fois la caractère C sur une ligne
# 2. Procédure -> Afficher deux caractère C, entre eux il y a des espaces
# 3. Procédure -> Afficher le contour d'un carré, en utilisant ^^


def ligne_pleine(val, char):
    for i in range(val):
        print(char, end='')


def ligne_creuse(val, char):
    for i in range(val):
        if i == 0 or i == val - 1:
            print(char, end='')
        else:
            print(' ', end='')


def afficher_carre(val, char):
    ligne_pleine(val, char)
    print('')

    for i in range(val - 2):
        ligne_creuse(val, char)
        print('')

    ligne_pleine(val, char)


afficher_carre(10, '*')  # Debug
