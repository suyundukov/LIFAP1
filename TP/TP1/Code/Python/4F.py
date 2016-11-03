#!/usr/bin/python
# Programmer une calculatrice proposant les opérations classiques
print('Donne moi une valeur : ', end='')
foo = int(input())
print('Donne moi une autre valeur : ', end='')
bar = int(input())
print('Donne moi l\'opérateur ( + | - | * | / ) : ', end='')
baz = str(input())

if baz == '+':
    print(foo, '+', bar, '=', foo + bar)
elif baz == '-':
    print(foo, '-', bar, '=', foo - bar)
elif baz == '*':
    print(foo, '*', bar, '=', foo * bar)
elif baz == '/':
    if bar == 0:
        print('La division par zéro')
    else:
        print(foo, '/', bar, '=', foo / bar)
else:
    print('Une erreur inconnue')
