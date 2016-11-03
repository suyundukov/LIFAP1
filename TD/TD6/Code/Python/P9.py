#!/usr/bin/python
# Calculer et retourner les N premiers termes de la suite


def suite(tab):
    tab[0] = 1

    for i in range(1, 5):
        tab[i] = tab[i - 1] / i


tab = [[] for i in range(5)]

suite(tab)

print(tab)
