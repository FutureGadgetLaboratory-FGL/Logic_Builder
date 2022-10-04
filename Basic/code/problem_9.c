/*
Write a program to Input two numbers and swap them.
*/

// Solved by napalion

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter num1: \n");
    scanf("%d",&num1);
    printf("Enter num2: \n");
    scanf("%d",&num2);
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);
    return 0;
}

