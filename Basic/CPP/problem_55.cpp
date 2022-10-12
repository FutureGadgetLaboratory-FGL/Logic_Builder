/* Write a Program to print the following pattern 
```
1       1
 2     2
  3   3
   4 4
    5
 ```
 submitted by:-sumitsaurabh3
    */

#include <iostream> 
using namespace std;

int main()
{
 int i, j, k;
 for(i=1; i<=5; i++)
 {
  for(j=1; j<=5; j++)
  {
   if(i == j)
    cout << j;
   else 
    cout << " ";
  }
  for(k=4; k>=1; k--)
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
