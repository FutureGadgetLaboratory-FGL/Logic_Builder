// Converts Binary no. to Decimal no.
//Added by HAPPYS1NGH

#include <bits/stdc++.h>
using namespace std;
int bintodec(int n)
{
    int d = 0, x = n, c = 0;
    while (x > 0)
    {
        d += x % 10 * pow(2, c++);
        x /= 10;
    }
    return d;
}
int32_t main()
{
    int a;
    cin >> a;
    cout << "Decimal of" << a << " is " << bintodec(a) << endl;
}
