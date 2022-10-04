/*
Write a program that accepts a number from a user and prints the factorial of that number
*/
// solved by Ashwani2529
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }       
return fact;  
}   
