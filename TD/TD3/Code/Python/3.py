#!/usr/bin/python
# Afficher les dix nombres suivants la valeur N donnée en paramètre


def show_num(a):
    for i in range(10):
        print(a, end='')
        a += 1


print('Donne moi une valeur : ', end='')
a = int(input())
show_num(a)
