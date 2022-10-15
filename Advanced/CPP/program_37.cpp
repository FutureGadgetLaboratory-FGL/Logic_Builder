#include<bits/stdc++.h>
using namespace std;
    
bool isValid(int a, int b, int N)
{
    if(a>=1 && a<=N && b>=1 && b<=N)
    {
        return true;
    }
    return false;
}

int minStepToReachTarget(vector<int>&knightPos, vector<int>&targetPos, int N)
{
    queue<pair<int, pair<int, int>>> q;
    bool visited[N+1][N+1] = {false};
    int dirx[] = {-1, 1, 2, 2, -1, 1, -2, -2};
    int diry[] = {2, 2, 1, -1, -2, -2, 1, -1};
    q.push({0, {knightPos[0], knightPos[1]}});
    visited[knightPos[0]][knightPos[1]] = true;
    while(!q.empty())
    {
        pair<int, pair<int, int>> temp = q.front();
        q.pop();
        int d = temp.first;
        int x = temp.second.first;
        int y = temp.second.second;
        if(x==targetPos[0] && y==targetPos[1])
        {
            return d;
        }
        for(int i=0; i<8; i++)
        {
            int a = x + dirx[i];
            int b = y + diry[i];
            
            if(isValid(a, b, N) && !visited[a][b])
            {
                visited[a][b] = true;
                q.push({d+1, {a, b}});
            }
        }
    }
    return -1;
}

int main(){
    vector<int>KnightPos(2);
    vector<int>TargetPos(2);
    int N;
    cin >> N;
    cin >> KnightPos[0] >> KnightPos[1];
    cin >> TargetPos[0] >> TargetPos[1];
    int ans = minStepToReachTarget(KnightPos, TargetPos, N);
    cout << ans <<"\n";
	return 0;
} 
