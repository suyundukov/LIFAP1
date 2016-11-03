#!/ust/bin/python
# Remplacer les valeurs de chaque case par la somme des valeurs precedents


def cumul(tab):
    somme = 0

    for i in range(len(tab)):
        somme += tab[i]
        tab[i] = somme


tab = [12, 8, 5.5, 14, 13, 10.5, 7, 16, 9]

cumul(tab)

print(tab)
