#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;

    // int mid = (start + end) / 2;
    // above value can be replaced by below value to avoid the range problem
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }

        if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int n, k;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    int index = BinarySearch(arr, n, k);

    cout << "index of k is " << index << endl;

    return 0;
}