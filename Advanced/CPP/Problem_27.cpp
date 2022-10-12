#include<bits/stdc++.h>
using namespace std;
long long minCost(long long arr[], long long n) {
  priority_queue < long long, vector < long long > , greater< long long >> pq(arr, arr + n);
  queue < long long > q;
  long long res = 0;
  while (pq.size() > 1)
   {long long sum = 0;
    long long a = pq.top();
    q.push(a);
    pq.pop();
    long long b = pq.top();
    q.push(b);
    pq.pop();
    sum += q.front();
    q.pop();
    sum += q.front();
    q.pop();
    res += sum;
    pq.push(sum);
  }
  return res;
}
int main() {
  int n;
  cin >> n;
  long long a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << minCost(a, n);
  return 0;
}
