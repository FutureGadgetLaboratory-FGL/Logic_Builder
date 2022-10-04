#include <iostream>
using namespace std;

void fib(int num){
    long long int a1=0,a2=1,nextterm;
    for (int i = 1; i <= num; i++)
    {   cout<<a1<<" ";
        nextterm=a1+a2;
        a1=a2;
        a2=nextterm;
    }
    
}
int main(){
    int n;
    cin>>n;

    fib(n);

    return 0;
}
