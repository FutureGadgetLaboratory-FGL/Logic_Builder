#33. Write a program to print the following pattern:
#1 
#2 3 
#4 5 6
#7 8 9 10

#Solved by Ashwani2529
def contnum(n):
	num = 1
	for i in range(0, n):
		for j in range(0, i+1):
			print(num, end=" ")
			num = num + 1
		print("\r")
n = 4
contnum(n)
