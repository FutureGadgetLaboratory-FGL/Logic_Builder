// Chef has recently moved into an apartment. It takes 3030 minutes for Chef to reach office from the apartment.

// Chef left for the office XX minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

//solved by aditya7302

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test,x;
	cin>>test;
	for(int i=0;i<test;i++)
	{
	    cin>>x;
	    if(x>=30)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
