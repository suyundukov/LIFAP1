#!/usr/bin/python
# Afficher le triangle de Pascal
from math import factorial as fact


def combin(n, p):
    return int(fact(n) / (fact(p) * fact(n - p)))


def triangele_pascal(val):
    for i in range(val + 1):
        for j in range(i + 1):
            print(combin(i, j), '', end='')
        print('')


triangele_pascal(4)  # Debug
