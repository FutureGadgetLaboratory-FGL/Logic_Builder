/*26. Write a program to print the following pattern:
* 
* * 
* * * 
* * * *    */

//Solved by VibhowSingh56
#include <stdio.h>
int main() {
   int i, j;
   for (i = 1; i <= 4; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }}
