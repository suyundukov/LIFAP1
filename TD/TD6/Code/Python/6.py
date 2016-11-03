#!/usr/bin/python
# Renverser le contenu d'un tableau contenant des caractères
# Ex: | A | B | C | D | E | -> | E | D | C | B | A |


def renverse_tab(tab):
    tab.reverse()


tab = ['A', 'B', 'C', 'D', 'E']

# tab.reverse() # I ❤ Python
renverse_tab(tab)

print(tab)
