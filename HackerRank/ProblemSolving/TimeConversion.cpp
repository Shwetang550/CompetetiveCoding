/*Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char t;
    scanf("%d:%d:%d%c", &a, &b, &c, &t);
    if (a == 12 && t == 'A')
        a = 0;
    else if (a >= 0 && a < 12 && t == 'P')
        a += 12;
    else if (a >= 24)
    {
        if (a == 24)
            a = 0;
        else if (a > 23)
            a = a - 24;
    }
    printf("%02d:%02d:%02d", a, b, c);
    return 0;
}
