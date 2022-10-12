// Created Pascal Triangle pattern 
// Added by HAPPYS1NGH 

#include <iostream>
using namespace std;
int factorial(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int nCr(int n, int r)
{
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}
int main()
{
    int row;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}
