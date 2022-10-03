/*
Input principal amount, rate and time and calculate S.I.
*/
// Solved by Krishna7472
#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter the principal amount(in rupees),rate(in percent) and time(in years): \n");
    scanf("%f\n%f\n%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The simple interest is Rs. %.3f",si);
    return 0;
}
