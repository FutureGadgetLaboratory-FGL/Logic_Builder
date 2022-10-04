/*
Write a program to Input two numbers and swap them.
*/
// Solved by Ashwani2529
x =int(input("Enter first number: "))
y =int(input("Enter second number: "))
temp = x
x = y
y = temp
print('First number after swapping: {}'.format(x))
print('Second number after swapping: {}'.format(y))
