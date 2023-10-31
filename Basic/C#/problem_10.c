/*
Write a program to Input 5 digit numbers and calculate sum of its digits.
*/

// Solved by napalion

#include<stdio.h>
int main(){
    int n,sum,copy;
    sum = 0;
    printf("Enter a 5 number digits: \n");
    scanf("%d",&n);
    copy = n; //copy the number to make sure we don't lose it.
    for(int i=0;i<5;i++){
        int y = copy%10; //digit
        copy = copy/10; //number without digit y
        sum = sum + y; //add digit to sum
    }
    printf("The sum of digits of the number %d is = %d\n",n,sum);
    return 0;
}