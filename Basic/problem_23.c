/*
Write a program to print the following pattern:
```html
*
* *
* * *
* * * *
```
*/

// Solved by hououinkyouma0

#include<stdio.h>

int main()
{
  int n, i, j;
  printf("Enter the height of the staircase: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) 
  {
    for (j = 0; j < (i + 1); j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
