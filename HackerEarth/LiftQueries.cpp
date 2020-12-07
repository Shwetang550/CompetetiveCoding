/*There are 7 floors in BH3 and only 2 lifts. Initially Lift A is at the ground floor and Lift B at the top floor. 
Whenever someone calls the lift from N th floor, the lift closest to that floor comes to pick him up. If both the lifts are at equidistant from the N th floor, 
them the lift from the lower floor comes up.*/

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
