#!/usr/bin/python
# Affichez le Nème terme de la suite de Fibonacci
# N.B. La suite de Fibonacci : 1 1 2 3 5 8 13 24


def fibonacci(val):
    a = 0
    b = 1
    c = 1

    for i in range(2, val + 1):
        a = b
        b = c
        c = a + b

    return c


print(fibonacci(5))  # Debug
