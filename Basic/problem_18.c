/*
Write a program to input a number and print the sum of its digits.
*/
// solved by Ashwani2529
#include<stdio.h>
int main()
{
    long int a,sum=0,temp,r;
    printf("Enter number: ");
    scanf("%ld",&a);
    while(a>0)
    {
    r=a%10;
    sum=(sum+r);
    a=a/10;}
    return sum;
}


