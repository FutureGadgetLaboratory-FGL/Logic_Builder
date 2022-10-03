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