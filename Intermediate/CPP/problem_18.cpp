/*
Perform Binary Search using recursion.
*/

// Solved by vrup0408 

#include<iostream>
using namespace std;

int binary_search_recursive(int *arr,int low,int high,int ele){
	int mid=(low+high)/2;
	if(low>high){
		return -1;
	}
	if(arr[mid]==ele){
		return mid;
	}
	else if(arr[mid]<ele){
		binary_search_recursive(arr,mid+1,high,ele);
	}
	else{
		binary_search_recursive(arr,low,mid-1,ele);
	}
}

int main(){
	int arr[]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	int ele=40;
	int searchIndex=binary_search_recursive(arr,0,n,ele);
	if(searchIndex==-1){
		cout<<"No specified element in the sequence"<<endl;
	}else{
		cout<<"Your Element: "<<ele<<" found at index: "<<searchIndex<<endl;
	}
	return 0;
}
