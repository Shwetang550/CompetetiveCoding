/*You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) 
are divisible by k. You do not need to print these numbers, you just have to find their count.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, k, c = 0;
    cin >> l >> r >> k;

    for (int i = l; i <= r; i++)
    {
        if (i % k == 0)
            c++;
    }

    cout << c;
    return 0;
}