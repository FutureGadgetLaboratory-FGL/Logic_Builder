#Problem 15 intermediate
# Write a program that print True if the number is odd and False if the number is even.


print("Enter the number: ")
a = int(input())

if a%2 == 0:
    print("True")
    
elif a%2 !=2:
    print("False")
    
else:
    print("Error in input")