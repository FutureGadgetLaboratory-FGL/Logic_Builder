#include<iostream>

using namespace std;

int maxProfit(int* p, int* w, int n, int c, int i) {
	if(i == n || c == 0) {
		return 0;
	}

	if(w[i] > c) {
		// you've no option but to exclude the ith item
		return maxProfit(p, w, n, c, i+1);
	}

	// I am standing at the ith item and I need to make a decision

	// include the ith item in the knapsack
	int p1 = maxProfit(p, w, n, c-w[i], i+1);

	// exclude the ith item from the knapsack
	int p2 = maxProfit(p, w, n, c, i+1);

	return max(p[i] + p1, p2);
		
}

int main() {

	int N = 5;
	int C = 4;
	int P[] = {8, 4, 0, 5, 3};
	int W[] = {1, 2, 3, 2, 2};

	cout << maxProfit(P, W, N, C, 0) << endl;

	return 0;
}
