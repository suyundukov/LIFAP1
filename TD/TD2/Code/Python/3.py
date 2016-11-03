#!/usr/bin/python
# Afficher la valeur (X / 2), si X est pair; sinon afficher (3 * X + 1)
print('Donne moi une valeur : ', end='')
a = int(input())

if a % 2 == 0:
    print(a, '/ 2 =', int(a / 2))
else:
    print('3 *', a, '+ 1 =', int(3 * a + 1))
