/*
 Binary Search using recursion.
*/

// Solved by Niladri Sadhu

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> v, int num, int beg, int end)
{
 int mid;
 
 if (beg > end){
  
  cout << "Number is not found";
  return 0;
  
 } else {
  
  mid = (beg + end) / 2;
  
  if(v[mid] == num){
   
   cout << "Number is found at index " << mid ;
   return 0;
  
  } else if (num > v[mid]) {
   
   BinarySearch (v, num, mid+1, end);
   
  } else if (num < v[mid]) {
   
   BinarySearch (v, num, beg , mid-1);
  }
 }
}

int main()
{
    int n,key;
    cout<<"Enter number of elements : ";
    cin>>n;
	vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>v[i];
    }
	cout<<"Enter the element to be searched :";
    cin>>key;
    int end=n-1;
	BinarySearch(v, key,0,end);
	return 0;
}

