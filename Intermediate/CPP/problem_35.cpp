//Smallest number on left

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    vector<int> leftSmaller(int n, int arr[])
    {
        vector<int> v;
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && st.top() >= arr[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(st.top());
            }
            st.push(arr[i]);
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
