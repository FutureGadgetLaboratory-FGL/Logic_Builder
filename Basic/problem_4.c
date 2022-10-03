/*
Input the side and calculate area of square.
*/
// Solved by Krishna7472
// importing required libraries
#include <stdio.h>
int main() {
	float side;
	printf("Enter the side of square : ");
	scanf("%f",&side);
	printf("Area of square of side %.3f is %.3f",side,(side*side));
	return 0;
}

