# 17. Write a program that accepts a number from a user and prints the factorial of that number
# (the range of the answer should be greater than 4294967295)
# by Nitin Kumar

n = int(input('Enter a number:'))
x = lambda num : 1 if num <= 1 else num*x(num-1)
print('{} ! = {}'.format(n, x(n)))
