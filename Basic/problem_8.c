/*
Write a program to Input temperature in Fahrenheit and convert into Celsius.
*/

// Solved by napalion

#include<stdio.h>
int main(){
    float Fahrenheit,Celsius;
    printf("Enter the temperature in Fahrenheit: \n");
    scanf("%f",&Fahrenheit);
    printf("The temperature %f°F = %f°C\n",Fahrenheit,((Fahrenheit-32)*5)/9);
    return 0;
}