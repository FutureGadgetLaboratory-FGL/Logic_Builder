/*Write a program to merge two arrays.*/
//Solved by aryangupta02092002

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[50], b[50], ans[100];
	int n, m, i, k;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a[i];
        ans[i] = a[i];
    }
    k = i;
    cin>>m;
    for(i=0; i<m; i++){
        cin>>b[i];
        ans[k] = b[i];
        k++;
    }
    for(i=0; i<k; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
