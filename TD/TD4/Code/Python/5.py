#!/ust/bin/python
# Calculer le nombre de combinaison de P éléments pour un ensemble de N
from math import factorial as fact


def combi(foo, bar):
    comb = int(fact(foo) / (fact(bar) * fact(foo - bar)))
    return comb


print('Donne moi deux valeur : ', end='')
foo = int(input())
bar = int(input())

print(combi(foo, bar))
