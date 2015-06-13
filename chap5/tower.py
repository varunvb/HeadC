#!/usr/bin/python

def tower_combination(n):
    if n > 1:
        return n * ( n - 1)

print tower_combination(3)
