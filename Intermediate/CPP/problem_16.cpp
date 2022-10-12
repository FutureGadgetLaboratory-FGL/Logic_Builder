/*Write a program to find the transpose of a matrix*/
//Solved by aryangupta02092002

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int sz;
    cin>>sz;
	int mat[sz][sz];
	
	for(int i=0; i<sz; i++){
	    for(int j=0; j<sz; j++){
	        cin>>mat[i][j];
	    }
	}

	int trans[sz][sz];

    for (int i = 0; i < sz; i++){
		for (int j = 0; j < sz; j++){
			trans[i][j] = mat[j][i];
		}
    }
			
	cout << "Result matrix is \n";
	for (int i = 0; i < sz; i++) {
		for (int j = 0; j < sz; j++)
			cout << " " << trans[i][j];

		cout << "\n";
	}
	return 0;
}
