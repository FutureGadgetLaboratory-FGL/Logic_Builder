#include <stdio.h>
#include <stdlib.h>
#define nl printf("\n")

int sum(int a, int b){
    return a+b;
}

int main(){

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    nl;
    printf("Sum of two numbers: %d",sum(a,b));
}