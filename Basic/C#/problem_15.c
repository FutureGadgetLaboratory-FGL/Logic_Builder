/*
Write a program that print if the given number is odd or even.
*/

// Solved by napalion

#include<stdio.h>
int main(){
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }
    return 0;
}