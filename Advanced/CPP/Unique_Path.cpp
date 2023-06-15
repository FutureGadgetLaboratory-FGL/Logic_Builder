/*
 
You are given an m x n integer array grid. There is a robot initially located at the 
top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner 
(i.e., grid[m-1][n-1]). The robot can only move either down or right at any point in time.
An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot 
takes cannot include any square that is an obstacle.
Return the number of possible unique paths that the robot can take to reach the bottom-
right corner.
The testcases are generated so that the answer will be less than or equal to 2 * 109. 
*/

#include<bits/stdc++.h>
using namespace std; 

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m=obstacleGrid.size();
    int n=obstacleGrid[0].size();
    if(m==0||n==0) return 0;
    int dp[m][n];
        memset(dp,0,sizeof(dp));
    for(int i=0;i<m;i++)
    {   if(obstacleGrid[i][0]!=1) dp[i][0]=1;
        else break;
    }
    for(int j=0;j<n;j++)
    {   if(obstacleGrid[0][j]!=1) dp[0][j]=1;
        else break;
    }
    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
            if(obstacleGrid[i][j]!=1)
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
    return dp[m-1][n-1];
}

    
int main(){
   int m,n; 
   cin>>m>>n; 

   vector<vector<int>> obstacleGrid(m, vector<int>(n)); 
   for(int i=0; i<m; i++){
     for(int j=0; j<n; j++){
        cin>>obstacleGrid[i][j]; 
     }
   } 

   cout << uniquePathsWithObstacles(obstacleGrid) << endl;  

}
