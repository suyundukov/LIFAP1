#!/usr/bin/python
# 1. Calculer la somme d'une ligne
# 2. Calculer la somme d'une colonne
# 3. Calculer la somme de deux diagonales


def somme_ligne(tab, n):
    som = 0

    for i in range(len(tab[0])):
        som += tab[n][i]

    return som


def somme_colonne(tab, n):
    som = 0

    for i in range(len(tab)):
        som += tab[i][n]

    return som


def somme_diagonale(tab):
    som = 0
    som1 = 0

    for i in range(len(tab)):
        som += tab[i][i]
        som1 += tab[i][4 - i]

    return som, som1


tab = [[2, 4, 6, 8, 10] for i in range(5)]

# La somme des éléments de la deuxième ligne
print('La somme des éléments de la ligne 2 est', somme_ligne(tab, 1))

# La somme des éléments de la toisième colonne
print('La somme des éléments de la 4 colonne est', somme_colonne(tab, 3))

# La somme des diagonales
som, som1 = somme_diagonale(tab)
print('La somme des éléments d\'une diagonale est',
      som, 'et celle de l\'autre est', som1)
