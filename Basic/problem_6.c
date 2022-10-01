/*
Write a program to Input base and height and calculate area of triangle.
*/

// Solved by napalion

#include<stdio.h>
int main(){
    int height,base;
    printf("Enter the base: \n");
    scanf("%d",&base);
    printf("Enter the height: \n");
    scanf("%d",&height);
    printf("The area of triangle of base %d and height %d is %d\n",base,height,(height*base)/2);
    return 0;
}