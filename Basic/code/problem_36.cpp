#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
// Function to calculate the minimum cost to join `n` ropes into a single rope
int findMinCost(vector<int> const &prices)
{
    // create a min-heap from input elements
    priority_queue<int, vector<int>, greater<int>> pq(prices.begin(), prices.end());
 
    // keep track of the minimum cost so far
    int cost = 0;
 
    // repeat till heap size is reduced to one
    while (pq.size() > 1)
    {
        // Extract the top two elements from the min-heap
        int x = pq.top();
        pq.pop();
 
        int y = pq.top();
        pq.pop();
 
        // calculate the cost of the extracted values
        int sum = x + y;
 
        // insert the cost back to the min-heap
        pq.push(sum);
 
        // update the minimum cost
        cost += sum;
    }
 
    return cost;
}
 
int main()
{
    vector<int> prices = { 5, 4, 2, 8 };
    cout << "The minimum cost is " << findMinCost(prices);
 
    return 0;
}
