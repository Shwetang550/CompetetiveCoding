/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n], sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == j)
                sum1 += a[i][j];
            if (i + j == (n - 1))
                sum2 += a[i][j];
        }
    }
    cout << abs(sum1 - sum2);
    return 0;
}
