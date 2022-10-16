/* write a program to print the following Pattern:
``` 
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
```
submitted by:-ssumit2
*/
#include <iostream> 
using namespace std;

int main()
{
 int i, j, k;
 for(i=1; i<=5; i++)
 {
  for(j=i; j<5; j++)
   cout << " ";
  for(k=1; k<i*2; k++)
   cout << k;
  cout << "\n";
 }
 for(i=4; i>=1; i--)
 { 
  for(j=5; j>i; j--)
   cout << " ";
  for(k=1; k<i*2; k++)
   cout << k;
  cout << "\n";
 }
 return 0;
}
