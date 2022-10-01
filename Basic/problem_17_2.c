#include <stdio.h>

int main() {
	printf("Enter the number : ");
	int num; unsigned long int fact=1;
	scanf("%d",&num);
	if (num > 20) {
		printf("Sorry the answer is out of range");
	} else {
		while (num>0) {
		fact*=num--;
		}
	printf("The factorial is %lu\n",fact);
	}
}
