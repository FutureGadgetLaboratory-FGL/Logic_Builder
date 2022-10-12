#27. Write a program to print the following pattern:
# * * * * 
# * * * 
# * * 
# *
#Solved by VibhowSingh56
def pypart(n):
	for i in range(0,n):
		for j in range(i+1, n):
			print("* ",end="")
		print("\r")
n = 5
pypart(n)
