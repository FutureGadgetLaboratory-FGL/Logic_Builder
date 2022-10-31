/*

https://codeforces.com/contest/134/problem/B

*/

#include<iostream>
#include<climits>

using namespace std;

// int f(int a, int b, int n) {
// 	// base case
// 	if(a == n || b == n) {
// 		return 0;
// 	}

	// // recursive case
	// int x = INT_MAX;
	// if(a+b <= n) {
	// 	x = f(a+b, b, n);
	// }
	
	// int y = INT_MAX;
	// if(a+b <= n) {
	// 	y = f(a, a+b, n);
	// }

	// return min(x, y) == INT_MAX ? INT_MAX : 1 + min(x, y);
// }

// int minSteps(int n) {
// 	return f(1, 1, n);
// }

int f(int a, int b) {
	// base case
	if(a == 1 && b == 1) {
		return 0;
	}

	// recursive case
	int x = INT_MAX;
	if(a-b >= 1) {
		x = f(a-b, b);
	}
	
	int y = INT_MAX;
	if(b-a >= 1) {
		y = f(a, b-a);
	}

	return min(x, y) == INT_MAX ? INT_MAX : 1 + min(x, y);

}

int minSteps(int n) {
	if(n == 1) return 0;
	int res = INT_MAX;
	for(int i=1; i<n; i++) {
		res = min(res, f(i, n));
	}
	return res;
}

int main() {

	int n;
	cin >> n;

	cout << minSteps(n) << endl;

	return 0;
}
