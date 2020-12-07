#include <bits/stdc++.h>

using namespace std;

int main()
{
    int floorNumber, a = 0, b = 7, t;
    cin >> t;

    while (t--)
    {
        cin >> floorNumber;

        if (abs(floorNumber - a) <= abs(b - floorNumber))
        {
            cout << "A" << endl;
            a = floorNumber;
        }
        else
        {
            cout << "B" << endl;
            b = floorNumber;
        }
    }

    return 0;
}