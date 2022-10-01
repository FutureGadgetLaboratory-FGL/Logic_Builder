/*
Input principal amount, rate and time and calculate S.I.
*/

// Solved by glitchy-coder-exe

#include<stdio.h>
#include<conio.h>
int main(){
    float p,r,t,si;
    clrscr();
    printf("Enter the principal amount(in rupees), rate(in percent) and time(in years): \n");
    scanf("%f\n%f\n%f",&p,&r,&t);
    si=p*r*t/100;
    printf("The simple interest is Rs. %f",si);
    getch();
    return 0;
}
