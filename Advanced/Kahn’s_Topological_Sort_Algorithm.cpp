#include <iostream>
#include <vector>
using namespace std;
 
// Data structure to store a graph edge
struct Edge {
    int src, dest;
};
 
// A class to represent a graph object
class Graph
{
public:
    // a vector of vectors to represent an adjacency list
    vector<vector<int>> adjList;
 
    // stores indegree of a vertex
    vector<int> indegree;
 
    // Graph Constructor
    Graph(vector<Edge> const &edges, int n)
    {
        // resize the vector to hold `n` elements of type `vector<int>`
        adjList.resize(n);
 
        // initialize indegree
        vector<int> temp(n, 0);
        indegree = temp;
 
        // add edges to the directed graph
        for (auto &edge: edges)
        {
            // add an edge from source to destination
            adjList[edge.src].push_back(edge.dest);
 
            // increment in-degree of destination vertex by 1
            indegree[edge.dest]++;
        }
    }
};
 
// Function to perform a topological sort on a given DAG
vector<int> doTopologicalSort(Graph const &graph)
{
    vector<int> L;
 
    // get the total number of nodes in the graph
    int n = graph.adjList.size();
 
    vector<int> indegree = graph.indegree;
 
    // Set of all nodes with no incoming edges
    vector<int> S;
    for (int i = 0; i < n; i++)
    {
        if (!indegree[i]) {
            S.push_back(i);
        }
    }
 
    while (!S.empty())
    {
        // remove node `n` from `S`
        int n = S.back();
        S.pop_back();
 
        // add `n` at the tail of `L`
        L.push_back(n);
 
        for (int m: graph.adjList[n])
        {
            // remove an edge from `n` to `m` from the graph
            indegree[m] -= 1;
 
            // if `m` has no other incoming edges, insert `m` into `S`
            if (!indegree[m]) {
                S.push_back(m);
            }
        }
    }
 
    // if a graph has edges, then the graph has at least one cycle
    for (int i = 0; i < n; i++)
    {
        if (indegree[i]) {
            return {};
        }
    }
 
    return L;
}
 
int main()
{
    // vector of graph edges as per the above diagram
    vector<Edge> edges =
    {
        { 0, 6 }, { 1, 2 }, { 1, 4 }, { 1, 6 }, { 3, 0 }, { 3, 4 },
        { 5, 1 }, { 7, 0 }, { 7, 1 }
    };
 
    // total number of nodes in the graph (labelled from 0 to 7)
    int n = 8;
 
    // build a graph from the given edges
    Graph graph(edges, n);
 
    // Perform topological sort
    vector<int> L = doTopologicalSort(graph);
 
    // print topological order
    if (L.size()) {
        for (int i: L) {
            cout << i << " ";
        }
    } else {
        cout << "Graph has at least one cycle. Topological sorting is not possible";
    }
 
    return 0;
}
