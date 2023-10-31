/*

Given a string s, return the length of the longest palindromic substring in s.

Example :

	Input: s = "babad"
	Output: "bab" or "aba"
	
*/

#include<iostream> 

using namespace std;

pair<int, int> longestPalindromeAroundCenter(string str, int lo, int hi) {
	while(lo >= 0 && hi < str.size()) {
		if(str[lo] == str[hi]) {
			// expand around the center
			lo--;
			hi++;
		} else {
			// undo the expansion and stop
			lo++;
			hi--;
			break;
		}
	}

	if(lo < 0 || hi >= str.size()) {
		// undo the expansion 
		lo++;
		hi--;
	}

	return {lo, hi};
}

string longestPalindrome(string str) {
	int s = 0; // used to keep track of starting index of the LPS
	int e = 0; // used to keep track of ending index of the LPS
	int l = 0; // used to keep track of length of the LPS

	for(int i=0; i<str.size(); i++) {
		// find the longest odd-length palindromic substring around the center i
		pair<int, int> po = longestPalindromeAroundCenter(str, i, i);
		int lo = po.second - po.first + 1;
		if(lo > l) {
			l = lo;
			s = po.first;
			e = po.second;
		}

		// find the longest even-length palindromic substric aroudn the center (i, i+1)
		pair<int, int> pe = longestPalindromeAroundCenter(str, i, i+1);
		int le = pe.second - pe.first + 1;
		if(le > l) {
			l = le;
			s = pe.first;
			e = pe.second;
		}
	}

	return str.substr(s, l); // str.substr(s, e-s+1); // if you do not keep track of length
}

int main() {

	
	return 0;
}
