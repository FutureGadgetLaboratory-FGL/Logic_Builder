/*
Input two variables and swap them.
*/

// Solved by Bhumi54321

#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    clrscr();
    printf("Enter the value of a and b:\n");
    scanf("%d\n%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The numbers after swapping:\na=%d\nb=%d",a,b);
    return 0;
}
