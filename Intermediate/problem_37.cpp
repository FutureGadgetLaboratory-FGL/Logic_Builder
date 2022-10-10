// To check if given triplet is a pythagorean triplet or not
//Added by HAPPYS1NGH
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
// int sq(int n)
// {
//     return n * n;
// }
bool triplet(int x, int y, int z)
{
    int a, b, c;
    a = max(x, y, z);
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = y;
        c = x;
    }
    // if (sq(a) == (sq(b) + sq(c)))
    if (a * a == b * b + c * c)
        return 1;
    else
        return 0;
}
int32_t main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (triplet(a, b, c))
        cout << "The no. are triplet " << endl;
    else
        cout << "The no. are not triplet " << endl;
}
