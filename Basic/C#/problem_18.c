/*
Write a program to input a number and print the sum of its digits.
*/

// solved by hououinkyouma0

#include<stdio.h>

int sumDigits(int n)
{
  int t = n, sum = 0;
  while (t != 0)
  {
    sum += t % 10;
    t /= 10;
  }
  return sum;
}

int main()
{
  int n, sum;
  printf("Enter the number: ");
  scanf("%d", &n);
  sum = sumDigits(n);
  printf("The sum of its digits = %d", sum);
  return 0;
}

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
