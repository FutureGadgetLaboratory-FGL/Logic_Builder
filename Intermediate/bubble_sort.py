'''
author : Pythonicboat
topic : program in python to bubble sort
'''

def bubbleSort(array):
  for i in range(len(array)):
    for j in range(0, len(array) - i - 1):

        #comparing adjacent elements
        if array[j] > array[j + 1]:

            # swapping elements
            temp = array[j]
            array[j] = array[j+1]
            array[j+1] = temp

data = [5, -34, 12, 7, -1]

bubbleSort(data)

print('Sorted Array in Ascending Order: ')
print(data)
