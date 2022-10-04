/*
C++ program to find first and last occurrences of a number in a given sorted array
*/

// solved by anmolali5811

#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int low, int high, int x, int n)
{
	if (high >= low) {
		int mid = low + (high - low) / 2;
		if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
			return mid;
		else if (x > arr[mid])
			return first(arr, (mid + 1), high, x, n);
		else
			return first(arr, low, (mid - 1), x, n);
	}
	return -1;
}

int last(int arr[], int low, int high, int x, int n)
{
	if (high >= low) {
		int mid = low + (high - low) / 2;
		if ((mid == n - 1 || x < arr[mid + 1])
			&& arr[mid] == x)
			return mid;
		else if (x < arr[mid])
			return last(arr, low, (mid - 1), x, n);
		else
			return last(arr, (mid + 1), high, x, n);
	}
	return -1;
}

// Driver program
int main()
{
	int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);

	int x = 8;
	printf("First Occurrence = %d\t",
		first(arr, 0, n - 1, x, n));
	printf("\nLast Occurrence = %d\n",
		last(arr, 0, n - 1, x, n));
	return 0;
}
