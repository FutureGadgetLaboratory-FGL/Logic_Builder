//To print the Floyd's Triangle
//Added by HAPPYS1NGH

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows"<<endl;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
