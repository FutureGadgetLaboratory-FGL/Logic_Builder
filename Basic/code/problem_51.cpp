/* Write a program to print the following pattern
 ```
   1 1 1 1 1
   1       1
   1       1
   1       1
   1 1 1 1 1
 
 ```
 */
#include <iostream> 
using namespace std;
int main()
{
 int i, j;
 for(i=1; i<=5; i++)
 {
  for(j=1; j<=5; j++)
  {
   if(i == 1 || i == 5 || j == 1 || j == 5)
    cout << "1 ";
   else 
    cout << "  "; 
  }
  cout << "\n";
 }
 return 0;
}

