def mergeKArrays(arr, a, output):
	c = 0

	for i in range(a):
		for j in range(4):
			output = arr[i][j]
			c += 1

	output.sort()



def printArray(arr, size):
	for i in range(size):
		print(arr[i], end=" ")


if __name__ == '__main__':
	arr = [[2, 6, 12, 34], [1, 9, 20, 1000], [23, 34, 90, 2000]]
	K = 4
	N = 3
	output = [0 for i in range(N * K)]

	mergeKArrays(arr, N, output)

	print("Merged array is ")
	printArray(output, N * K)

