#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = true;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        arr[x - 1] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            cout << i + 1;
            break;
        }
    }
}
