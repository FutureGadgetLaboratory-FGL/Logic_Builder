#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matOne[10][10], matTwo[10][10], matThree[10][10];
    int matOneRow, matOneCol, matTwoRow, matTwoCol;
    int i, j, k, sum;
    cout << "Enter the Row Size of First Matrix: ";
    cin >> matOneRow;
    cout << "Enter the Column Size of First Matrix: ";
    cin >> matOneCol;
    cout << "\nEnter " << matOneRow * matOneCol << " Elements for First Matrix: ";
    for (i = 0; i < matOneRow; i++)
    {
        for (j = 0; j < matOneCol; j++)
            cin >> matOne[i][j];
    }
    cout << "\nEnter the Row Size of Second Matrix: ";
    cin >> matTwoRow;
    cout << "Enter the Column Size of Second Matrix: ";
    cin >> matTwoCol;
    cout << "\nEnter " << matTwoRow * matTwoCol << " Elements for Second Matrix: ";
    for (i = 0; i < matTwoRow; i++)
    {
        for (j = 0; j < matTwoCol; j++)
            cin >> matTwo[i][j];
    }
    if (matOneCol != matTwoRow)
    {
        cout << "\nMultiplication Not Possible!\n";
        return 0;
    }
    // Multiplying the two matrix...
    for (i = 0; i < matOneRow; i++)
    {
        for (j = 0; j < matTwoCol; j++)
        {
            sum = 0;
            for (k = 0; k < matOneCol; k++)
                sum = sum + (matOne[i][k] * matTwo[k][j]);
            matThree[i][j] = sum;
        }
    }
    cout << "\nMultiplication Result:\n";
    for (i = 0; i < matOneRow; i++)
    {
        for (j = 0; j < matTwoCol; j++)
            cout << matThree[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    return 0;
}
