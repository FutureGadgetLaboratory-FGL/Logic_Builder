#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    int largestRectangleArea(vector < int > & histo) {
      stack < int > st;
      int maxA = 0;
      int n = histo.size();
      for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || histo[st.top()] >= histo[i])) {
          int height = histo[st.top()];
          st.pop();
          int width;
          if (st.empty())
            width = i;
          else
            width = i - st.top() - 1;
          maxA = max(maxA, width * height);
        }
        st.push(i);
      }
      return maxA;
    }
};
int main() {
  vector < int > histo = {2, 1, 5, 6, 2, 3, 1};
  Solution obj;
  cout << "The largest area in the histogram is " << obj.largestRectangleArea(histo) << endl;
  return 0;
}


// Output: The largest area in the histogram is 10

// Time Complexity: O( N ) + O (N)

// Space Complexity: O(N)
