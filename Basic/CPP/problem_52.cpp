/* Write a program to print following pattern
``` 
    1
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
```
submitted by:-ssumit2
*/

#include <iostream> 
using namespace std;

int main()
{
 int i, j, k;
 // First Part 
 for(i=1; i<=5; i++)
 {
  for(j=5; j>=1; j--) 
  {
   if(i == j)
    cout << j;
   else 
    cout << " ";
  }
  for(k=2; k<=5; k++)
  {
   if(i == k)
    cout << k;
   else 
    cout << " ";
  }
  cout << "\n";
 }
 // Second Part
 for(i=4; i>=1; i--)
 {
  for(j=5; j>=1; j--)  
  {
   if(i == j)
    cout << j;
   else 
    cout << " ";
  }
  for(k=2; k<=5; k++)
  {
   if(i == k)
    cout << k;
   else 
    cout << " ";
  }
  cout << "\n";
 }
 return 0;
}
