/*
    Input two numbers
    and print theis sum
    using functions.
*/

// Solved by HijazP

#include <stdio.h>
#include <stdlib.h>

void print_sum(int a, int b)
{
    printf("The sum is: %d", a+b);
}

int main()
{
    int a, b;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);

    print_sum(a, b);
}