#!/ust/bin/python
# Remplir un tableau de notes, quantité des notes est demandée à USER


def remplir_tab(tab):
    for i in range(len(tab)):
        print('Donne moi la valeur pour la case', i + 1, ': ', end='')
        tab[i] = float(input())


tab = [[] for i in range(9)]

remplir_tab(tab)

print(tab)
