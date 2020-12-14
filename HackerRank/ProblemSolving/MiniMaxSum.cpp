/*Given five positive integers, find the minimum and maximum values that can be calculated by 
summing exactly four of the five integers. Then print the respective minimum and maximum values 
as a single line of two space-separated long integers.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5], max, t;
    long int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    max = a[0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {

            if (a[i] < a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
            sum1 += a[i];
        if (i > 0)
            sum2 += a[i];
    }

    cout << sum2 << " " << sum1;
    return 0;
}
