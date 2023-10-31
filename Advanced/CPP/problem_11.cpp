/*Largest Rectangle in Histogram*/
//Solved by aryangupta02092002

#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int mx = 0;
    int sz = heights.size();
        
    for(int i=0; i<=sz; i++){
        while(!st.empty() && (i == sz || heights[st.top()] >= heights[i])){
            int height = heights[st.top()];
            st.pop();
                
            int width;
            if(st.empty()){
                width = i;
            }
            else{
                width = i-st.top()-1;
            }
            mx = max(mx, width*height);
        }
        st.push(i);
    }
    return mx;
}

int main() {
    int sz;
    cin>>sz;
    
    vector<int> heights;
    for(int i=0; i<sz; i++){
        int a;  cin>>a;
        heights.push_back(a);
    }
    cout<<largestRectangleArea(heights);
}
