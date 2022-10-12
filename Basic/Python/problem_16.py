# 16. Write a program that given 3 numbers, a, b and c, 
# print the roots of the equation ax² + bx + c = 0.
# by Nitin Kumar

import math


a = int(input('Enter 1st number:'))
b = int(input('Enter 2nd number:'))
c = int(input('Enter 2nd number:'))

det = b*b - 4*a*c
det_sqrt = math.sqrt(abs(det))

if a == 0:
    print('Incorrect quadratic equation.\n a = {}, b = {}, c = {}'.format(a,b,c))
else:
    if det > 0:
        print('Real and different roots.')
        print('First Root - {}'.format((-b + det_sqrt)/(2*a)))
        print('First Root - {}'.format((-b - det_sqrt)/(2*a)))
    elif det == 0:
        print('Real and same roots.')
        print('Root is {}'.format(-b/(2*a)))
    else:
        print('Non real roots.')
        print(- b / (2 * a), " + i", det_sqrt) 
        print(- b / (2 * a), " - i", det_sqrt)
    
    

    
