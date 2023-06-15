/*
Given an integer array 'nums', return the length of the longest strictly increasing subsequence.
A subsequence is a sequence that can be derived from an array by deleting some or no elements without 
changing the order of the remaining elements. 
Example 1:
	Input: nums[] = [10,9,2,5,3,7,101,18]
	Output: 4
	Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
Example 2:
	Input: nums[] = [0,1,0,3,2,3]
	Output: 4
*/


#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int f(vector<int>& nums, int i) {
	// base case
	if(i == nums.size()-1) {
		return 1;
	}

	// recursive case
	int ans = 0;
	for(int j=i+1; j<nums.size(); j++) {
		if(nums[j] > nums[i]) {
			ans = max(ans, f(nums, j));
		}
	}

	return 1 + ans;
}

int LIS(vector<int>& nums) {

	// nums.insert(nums.begin(), INT_MIN);
	// return f(nums, 0) - 1;

	int finalAns = 0;
	for(int i=0; i<nums.size(); i++) {
		finalAns = max(finalAns, f(nums, i));
	}
	return finalAns;
	
}

int LISBottomUp(vector<int>& nums) {
	int n = nums.size();
	vector<int> dp(n);

	dp[n-1] = 1;
	// int finalAns = 0;
	for(int i=n-2; i>=0; i--) {
		int ans = 0;
		for(int j=i+1; j<n; j++) {
			if(nums[j] > nums[i]) {
				ans = max(ans, dp[j]);
			}
		}
		// finalAns = max(ans, finalAns);
		dp[i] =  1+ans;
	}

	cout << "dp[] = ";
	for(int i=0; i<n; i++) {
		cout << dp[i] << " ";
	}

	cout << endl;

	int finalAns = 0;
	int k = -1;
	for(int i=0; i<n; i++) {
		if(dp[i] > finalAns) {
			finalAns = dp[i];
			k = i;
		}
	}

	vector<int> lis = {nums[k]};
	int len = finalAns - 1;
	for(int i=k+1; i<n; i++) {
		if(nums[i] > lis.back() && dp[i] == len) {
			lis.push_back(nums[i]);
			len--;
		}
	}

	cout << "lis[] = ";
	for(int i=0; i<lis.size(); i++) {
		cout << lis[i] << " ";
	}

	cout << endl;

	return finalAns;

}

int LISBottomUpV2(vector<int>& nums) {
	nums.insert(nums.begin(), INT_MIN);
	int n = nums.size();
	vector<int> dp(n);

	dp[n-1] = 1;
	for(int i=n-2; i>=0; i--) {
		int ans = 0;
		for(int j=i+1; j<n; j++) {
			if(nums[j] > nums[i]) {
				ans = max(ans, dp[j]);
			}
		}

		dp[i] =  1+ans;
	}

	return dp[0]-1;

}

int main() {

	vector<int> nums = {10,9,2,5,3,7,101,18};
	cout << LIS(nums) << endl;
	cout << LISBottomUp(nums) << endl;
	cout << LISBottomUpV2(nums) << endl;

	return 0;
}
