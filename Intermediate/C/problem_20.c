// factorial of a number
#include<stdio.h>
int fact(int n)
{ int f=1,i;
  for(i=1;i<=n;i++)
   f=f*i;
   return f;
}
void main()
{int a;
printf("Enter a number:");
scanf("%d",&a);
printf("\n Factorial of %d:%d",a,fact(a));
}
