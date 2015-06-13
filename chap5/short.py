#!/usr/bin/python

def shorter_reverse_longer(a,b):
    if a is not None and b is not None:
        if len(a) > len(b) or len(a)==len(b): 
            return b+a[::-1]+b
        elif len(b) > len(a):
            return a+b[::-1]+a
            
print shorter_reverse_longer("first", "abcde")
