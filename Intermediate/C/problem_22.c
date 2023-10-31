#include<stdio.h>
void main()
{int a,i,j;
char b;
 printf("Enter a number:");
 scanf("%d",&a);
 b=65;
 for(i=0;i<a;i++)
 { for(j=0;j<=i;j++)
   printf("%c ",b);
   b++;
   printf("\n");
 }
}
