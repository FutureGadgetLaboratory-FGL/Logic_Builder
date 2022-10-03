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

