End
Example Code
#include <iostream>
#include <climits>
using namespace std;
int knapSack(int v[], int w[], int n, int W) {
   if (W < 0)
      return INT_MIN;
   if (n < 0 || W == 0)
      return 0;
   int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
   int ex = knapSack(v, w, n - 1, W);
   return max (in, ex);
}
int main() {
   int v[] = { 10, 20, 30, 40, 60, 70 };
   int w[] = { 1, 2, 3, 6, 7, 4 };
   int W = 7;
   int n = sizeof(v) / sizeof(v[0]);
   cout << "Knapsack value is " << knapSack(v, w, n - 1, W);
   return 0;
}
