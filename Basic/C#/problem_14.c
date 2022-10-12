/*
Write a program that given 2 numbers, n and k, calculate n to the power of k.
*/

// Solved by napalion

#include<stdio.h>
int main(){
    int n,k,sum;
    printf("Enter n: \n");
    scanf("%d",&n);
    printf("Enter k: \n");
    scanf("%d",&k);
    sum = 1;
    for(int i=0;i<k;i++){
        sum = sum * n;
    }
    printf("%d to the power of %d is %d\n",n,k,sum);
    return 0;
}