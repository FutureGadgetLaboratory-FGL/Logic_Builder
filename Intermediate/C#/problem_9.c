/**
author : Pythonicboat
topic : program in c to bubble sort
**/

#include <stdio.h>

void bubbleSort(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {

      // comparing adjacent elements
      if (array[i] > array[i + 1]) {

        // swapping elements
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {5, -34, 12, 7, -1};
  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);

  printf("Sorted Array in Ascending Order : ");
  printArray(data, size);
}
