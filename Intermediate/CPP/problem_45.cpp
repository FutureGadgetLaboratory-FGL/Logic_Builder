// 0-1 Knapsack Problem //

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int dp[n+1][W+1];
       for(int i=0;i<n+1;i++) dp[i][0]=0;
       for(int j=0;j<W+1;j++) dp[0][j]=0;
       for(int i=1;i<n+1;i++){
           for(int j=1;j<W+1;j++){
               if(wt[i-1]<=j){
                   dp[i][j]=max((val[i-1]+dp[i-1][j-wt[i-1]]),dp[i-1][j]);
               }
               else dp[i][j]=dp[i-1][j];
           }
       }
       return dp[n][W];
    }
};

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
