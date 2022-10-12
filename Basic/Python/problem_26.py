'''
Write a program to Print the following pattern:
*
* *
* * *
* * * *
'''

# Solved by Ashani2529
n=4
def pypart(n):
	for i in range(0, n):
		for j in range(0, i+1):
			print("* ",end="")
		print("\r")
pypart(n)
