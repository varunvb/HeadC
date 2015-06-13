#!/usr/bin/python

def candies(s):
    if len(s) > 0:
        max = s[0]
        for i in s:
            if i > max: max = i
        list1 = []
        for i in s:
            list1.append(max-i)
        sum = 0
        for i in list1:
            sum = sum + i
        return sum
    else:
        return -1

print candies([5,8,6,4])
