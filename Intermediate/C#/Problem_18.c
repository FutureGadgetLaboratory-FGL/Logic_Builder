using System;

class Node {
	static int binarySearch(int[] arr, int l, int r, int x)
	{
		if (r >= l) {
			int mid = l + (r - l) / 2;

			if (arr[mid] == x)
				return mid;

			if (arr[mid] > x)
				return binarySearch(arr, l, mid - 1, x);

			return binarySearch(arr, mid + 1, r, x);
		}

		return -1;
	}

	public static void Main()
	{

		int[] arr = { 2, 3, 4, 10, 40 };
		int n = arr.Length;
		int x = 10;

		int result = binarySearch(arr, 0, n - 1, x);

		if (result == -1)
			Console.WriteLine("Element not present");
		else
			Console.WriteLine("Element found at index "
							+ result);
	}
}

