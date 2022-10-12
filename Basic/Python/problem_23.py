# 23. Input the sides of a triangle and print the area of a triangle using heron's formula. heron's formula = (S*(S-A)*(S-B)*(S-C))^1/2 where S=(A+B+C)/2 and A,B and C are the sides of the triangle.
# Solved By Ashwani2749

a = float(input('Enter first side of traingle: '))  
b = float(input('Enter second side of traingle: '))  
c = float(input('Enter third side of traingle: '))  
s = (a+b+c)/2  
Area = (s*(s-a)*(s-b)*(s-c)) ** 0.5  
print('The area of the triangle is %0.2f' %Area)   
