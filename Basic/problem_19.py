/*
Write a program to print the palindrome of a string.
*/
// Solved by Ashwani2529
x=str(input("enter string"))
a=x[::-1]
if a==x:
    print("string is palindrome= "+x)
else:
    print("string is not palindrome= "+x)
