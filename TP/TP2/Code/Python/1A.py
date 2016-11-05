#!/usr/bin/python
# Retourner le maximum de deux réels


def return_max(foo, bar):
    if foo > bar:
        return foo
    else:
        return bar


print('Donne moi une valeur : ', end='')
foo = float(input())
print('Donne moi une autre valeur : ', end='')
bar = float(input())

print(return_max(foo, bar))  # Debug
