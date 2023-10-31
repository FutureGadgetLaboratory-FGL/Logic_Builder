#include <bits/stdc++.h>
using namespace std;

bool canJump(int A[], int n) {
    int i = 0;
    for (int reach = 0; i < n && i <= reach; ++i)
        reach = max(i + A[i], reach);
    return i == n;
}

int main()
{
  int A[5] = {2,3,1,1,4};
  canJump(A,5);
  return 0;
}
