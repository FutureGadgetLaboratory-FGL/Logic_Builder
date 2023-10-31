/*
Write a program to print the reverse of a number.
*/

// Solved by niladri2002

#include <iostream>
using namespace std;

int main() {

  int n, reversed = 0, r;

  cout << "Enter a number: ";
  cin >> n;

  while(n != 0) 
  {
    r = n % 10;
    reversed = reversed * 10 +r;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed;

  return 0;
}
