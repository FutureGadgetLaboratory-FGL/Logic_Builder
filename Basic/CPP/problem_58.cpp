/* 
Given an array of N integers .find the sum of array 
submitted by:-ssumit2
*/
#include <iostream> 
using namespace std;

int main()
{int n;
cout<<"Enter the size of Array"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the number "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 int sum=0;
 for(int i=0;i<5;i++){
     sum+=arr[i];
 }
 cout<<"sum="<<sum<<endl;
}

