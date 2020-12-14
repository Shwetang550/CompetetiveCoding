/*You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for 
each year of their total age. They will only be able to blow out the tallest of the candles. 
 Count how many candles are tallest.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], mx, c = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (mx < a[i])
            mx = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (mx == a[i])
            c++;
    }

    cout << c;
    return 0;
}
