/*  display the pattern below
A
A B
A B C 
A B C D*/

#include<stdio.h>
void main()
{int a,i,j;
char b;
 printf("Enter a number:");
 scanf("%d",&a);

 for(i=0;i<a;i++)
 {  b=65;
   for(j=0;j<=i;j++)
   {printf("%c ",b);
   b++;
   }
   printf("\n");
 }
}
