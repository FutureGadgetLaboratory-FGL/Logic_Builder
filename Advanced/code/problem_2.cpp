/*
Longest Increasing Subsequence

Find out the longest increasing subsequence in the given array 
a subsequence of an array can be created by deleting  0 or more elements from the array without changing the order of the array 
eg [3,4,5,2,4,5]
[4 5 2] is a subsequence of the array 
[3 4 2] is not a subsequence of the array 
Solved by Rohan-G
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    //Take no of elements of array as input
    int n;
    cin >> n;

    vector<int> L;
    vector<int> lisarr(n,1);

    //take in array as input
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        L.push_back(x);
    }

    //finding LIS using DP
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(L[i]>L[j]){
                if(lisarr[j]+1 > lisarr[i]){
                    lisarr[i] = lisarr[j]+1;
                }
            }
        }
    }

    //find max of lisarr
    int max = lisarr[0];
    for(int i=1;i<n;i++){
        if(lisarr[i]>max){
            max = lisarr[i];
        }
    }

    cout << max << endl;
    return 0;

}
