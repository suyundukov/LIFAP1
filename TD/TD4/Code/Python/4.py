#!/ust/bin/python
# 1. Retourner le perimetre d'un cercle
# 2. Retourner l'aire d'un cercle
# 3. Utliser ces deux fonction
from math import pi


def perim_cercle(ray):
    per = int(2 * pi * ray)
    return per


def aire_cercle(ray):
    aire = int(pi * ray ** 2)
    return aire


def perim_et_aire(ray):
    per = perim_cercle(ray)
    aire = aire_cercle(ray)
    return per, aire


print('Donne moi une valeur : ', end='')
foo = int(input())

per, aire = perim_et_aire(foo)

print('Le périmètre de ton cercle est :', per,
      'et l\' aire de ce cercle est', aire)
