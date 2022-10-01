/*
Input the side and calculate area of square.
*/

// Solved by hypernovaradiation

// importing required libraries
#include <stdio.h>

int main() {
	//taking input from the user
	float side;
	printf("Enter the side of square : ");
	scanf("%f",&side);
	
	//calculating area
	float area = side*side;

	//printing result
	printf("Area of square of side %f is %f",side,area);
	
	//return status
	return 0;
}
