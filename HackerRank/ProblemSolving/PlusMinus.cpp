/*Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. 
Print the decimal value of each fraction on a new line with 6 places after the decimal.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    float p = 0, neg = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 0)
            z++;
        else if (a[i] < 0)
            neg++;
        else if (a[i] > 0)
            p++;
    }

    cout << p / n << endl
         << neg / n << endl
         << z / n;
    return 0;
}
