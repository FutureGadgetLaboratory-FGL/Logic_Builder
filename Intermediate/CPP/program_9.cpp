// Josephus Problem
// C++ program
//Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.


//solution by Geetanjaligupta123

#include <bits/stdc++.h>
using namespace std;






class Solution
{
    public:
    int josephus(int n, int k)
    {
         if(n==1)
         return 1;
       return ((josephus(n-1, k)+k-1)%n+1);
       //Your code here
    }
};


//main function


int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
