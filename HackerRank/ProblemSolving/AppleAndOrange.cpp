#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int s, t, a, b, m, n, max;
    cin >> s >> t >> a >> b >> m >> n;
    long long int apple[m], orange[n], ap = 0, orr = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> apple[i];
        if ((apple[i] + a) >= s && (apple[i] + a) <= t)
            ap++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
        if ((orange[i] + b) >= s && (orange[i] + b) <= t)
            orr++;
    }

    cout << ap << endl
         << orr;
    return 0;
}
