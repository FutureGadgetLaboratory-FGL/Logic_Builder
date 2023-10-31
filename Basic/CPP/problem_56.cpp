/* write a Program to print the following pattern:
```html 
       1 
     2 3 4
   5 6 7 8 9
```
submitted by:-sumitsaurabh3
*/

#include <iostream> 
using namespace std;

int main()
{
 int i, j, k;
 k = 1;
 for(i=1; i<=5; i+=2)
 {
  for(j=5; j>=1; j--)
  {
   if(j > i)
    cout << " ";
   else 
    cout << k++ << " ";
  }
  cout << "\n";
 }
 return 0;
}
