//Insertion sort non-recursive approach

#include<iostream>
using namespace std;

void insertion_sort(int *arr, int n)
{
    int i,j,temp;
    for(i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while(j >= 0)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
