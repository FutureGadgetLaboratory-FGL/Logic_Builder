// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars whose heights are given in an array. 
// assume that all bars have the same width and the width is 1 unit.
// eg   histogram = {6, 2, 5, 4, 5, 1, 6}
//  _           _
// | |  _   _  | |
// | | | |_| | | |
// | | | | | | | |
// | |_| | | | | | 
// | | | | | |_| |
// | | | | | | | |
   
// output 4*3=12
   

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
