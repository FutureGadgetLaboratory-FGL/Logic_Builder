# 14. Write a program that given 2 numbers, n and k, calculate n to the power of k.

import math


n = int(input('Enter 1st number:'))
k = int(input('Enter 2nd number:'))

print('{} to the power {} equals {}'.format(n, k, math.pow(n,k)))
