/*
Input radius and calculate area and circumference of circle.
*/

// Author - hypernovaradiation

// Including required libraries
#include <stdio.h>

int main() {
	//initializing value of PI and taking input from user
	float PI=3.142857; float radius;
	printf("Enter the radius of circle : ");
	scanf("%f",&radius);

	//calcuating Area
	float area=PI*radius*radius;

	//printing the result
	printf("Area of circle of radius %f is %f",radius,area);

	//returning status
	return 0;
}
