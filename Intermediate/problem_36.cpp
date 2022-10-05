// Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        int sum = 0;

        int ans = INT_MIN;

        for (int i = 0; i < n; i++)

        {
            sum = sum + arr[i];

            ans = max(ans, sum);

            if (sum < 0)

            {

                sum = 0;
            }
        }

        return ans;
    }
};

int main()
{
    int t, n;

    cin >> t;   //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
