/*
Program to print this pattern
   *
  * *
 * * *
* * * *
*/

// Author - hypernovaradiation

#include <stdio.h>

int main() {	
	int n=4;
	for (int i=n;i>0;i--) {
		int x=i-1;
		int y=n-x;
		while (x>0) {
			printf("%c",' ');
			x--;
		}
		while (y>0) {
			printf("%c",'*');
			printf("%c",' ');
			y--;
		}
		printf("%c",'\n');
	}
}
