/*
Input two variables and swap them using a function.
*/

// Solved by Bhumi54321

#include <stdio.h>

void swap(int *p, int *q){
    *p = *p + *q - (*q = *p);
}
int main(){
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The values of a and b after swapping:\na = %d\nb = %d",a,b);
    return 0;
}
