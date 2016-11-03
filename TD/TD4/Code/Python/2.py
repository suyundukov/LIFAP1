#!/usr/bin/python
# Effectuer la permutation de trois variables


def permute(foo, bar, buz):
    foo, bar, buz = buz, foo, bar
    return foo, bar, buz


foo = 5
bar = 8
buz = 2

foo, bar, buz = permute(foo, bar, buz)  # I ❤ Python
