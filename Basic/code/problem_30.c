// problem 30 
//Input radius and print the surface area of sphere.
//Using C program


#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r;
    float area;
    float pie = 3.141592;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &r);
    area = 4 * pie * r * r ; 
    printf("The area of the sphere is: %.3f", area);

    return 0;
}