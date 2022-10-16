#include <bits/stdc++.h>
using namespace std;

bool checkCycle(int node, vector<int> adj[], vector<int>& visited, vector<int>& path)
{
    visited[node] = 1;
    path[node] = 1;
    for(int nbr:adj[node])
    {
        if(!visited[nbr])
        {
            if(checkCycle(nbr, adj, visited, path))
            {
                return true;
            }
        }
        else if(path[nbr])
        {
            return true;
        }
    }
    path[node] = 0;
    return false;
}

bool isCyclic(int V, vector<int> adj[]) 
{
    vector<int> visited(V, 0);
    vector<int> path(V, 0);
    
    for(int i=0; i<V; i++)
    {
        if(!visited[i])
        {
            if(checkCycle(i, adj, visited, path))
            {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int V, E;
    cin >> V >>E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) 
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    bool ans = isCyclic(V, adj);
    if(ans){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}  
