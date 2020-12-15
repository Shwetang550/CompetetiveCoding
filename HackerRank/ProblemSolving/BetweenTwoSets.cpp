/*There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

1. The elements of the first array are all factors of the integer being considered
2. The integer being considered is a factor of all elements of the second array
These numbers are referred to as being between the two arrays. Determine how many such numbers exist.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c = 0, flag, a[101], b[101];
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = a[m - 1]; i <= b[0]; i += a[m - 1])
    {
        flag = 0;

        for (int j = 0; j < m; j++)
            if (i % a[j] != 0)
            {
                flag = 1;
                break;
            }

        for (int j = 0; j < n; j++)
            if (b[j] % i != 0)
            {
                flag = 1;
                break;
            }

        if (flag == 0)
            c++;
    }
    cout << c;
    return 0;
}
