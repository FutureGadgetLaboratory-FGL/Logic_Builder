#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001][4];
const int mod=int(1e9+7);
int sol(string &s,int i,int j,int ch){
    if(i>j)return 0;
    if(i==j){
        if(s[i]==ch+'a')return 1;
            else return 0;
        }
    if(dp[i][j][ch]!=-1)return dp[i][j][ch];
	int ans=0;
    if(s[i]==s[j] and s[i]==ch+'a') 
	    {
            ans=2;
            for(int k=0;k<4;k++)
                ans=(ans+sol(s,i+1,j-1,k))%mod;
        }
    else
    {   ans=(ans+sol(s,i+1,j,ch))%mod;
        ans=(ans+sol(s,i,j-1,ch))%mod;
        ans=(ans-sol(s,i+1,j-1,ch))%mod;
        if(ans<0)ans+=mod;
    }
    return dp[i][j][ch]=ans;
    }
int countPalindromicSubsequences(string s) {
    int n=s.length();
    memset(dp,-1,sizeof(dp));
    int ans=0;
    for(int i=0;i<4;i++)
        ans=(ans+sol(s,0,n-1,i))%mod;
        return ans;
    }
int main() {
  string a;
  cin>>a;
  cout<<countPalindromicSubsequences(a);
  return 0;}
