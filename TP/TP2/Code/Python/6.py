#!/usr/bin/python
# Afficher une frise


def afficher_carre(val, char):
    for i in range(val):
        print(char, end='')


def afficher_frise(val, l, h):
    for i in range(val):
        afficher_carre(l, '*')
        afficher_carre(l - 2, ' ')

    print('')

    for i in range(h - 1):
        for j in range(val):
            afficher_carre(1, '*')
            afficher_carre(l - 2, ' ')
            afficher_carre(1, '*')
            afficher_carre(l - 2, ' ')
        print('')

    afficher_carre(1, '*')

    for i in range(val):
        afficher_carre(l - 2, ' ')
        afficher_carre(l, '*')

    print('')


afficher_frise(5, 6, 7)  # Debug
