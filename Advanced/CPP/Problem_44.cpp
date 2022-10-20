#include<bits/stdc++.h>
using namespace std;

int f(int i,int j,string& s,string& t){
		if(j<0) return 1;
		if(i<0) return 0; 
//         Match 
		if(s[i]==t[j]){
			int pick=f(i-1,j-1,s,t);
			int notpick=f(i-1,j,s,t);
			return pick+notpick;
		}
//         Notmatch
		return f(i-1,j,s,t);
	}

	int numDistinct(string s, string t) {
		int n=s.size();
		int m=t.size();
		return f(n,m,s,t);
	}

int main(){

 string s, t; 
 cin>>s>>t; 
 int m = s.length(); 
 int n = t.length(); 
 cout << f(m-1, n-1, s, t) << endl;
 return 0; 
}
