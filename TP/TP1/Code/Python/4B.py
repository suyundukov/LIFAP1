#!/usr/bin/python
# Afficher la plus petite de deux valeurs
print('Donne moi une valeur : ', end='')
foo = int(input())
print('Donne moi une autre valeur : ', end='')
bar = int(input())

if foo > bar:
    print(foo, 'est supérieur à', bar)
elif foo < bar:
    print(bar, 'est supérieur à', foo)
else:
    print('Ils sont identiques')
