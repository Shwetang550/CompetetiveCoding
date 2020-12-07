/*Harry wants to find Voldemort's potion making book but he is confused about how to get it.

The book has a special ISBN(International Standard Book Number) which is  unique numeric book identifier only for
Voldemort's book printed on it. The ISBN is based upon a 10-digit code. The ISBN is valid if:
1xdigit1 + 2xdigit2 + 3xdigit3 + 4xdigit4 + 5xdigit5 + 6xdigit6 + 7xdigit7 + 8xdigit8 + 9xdigit9 + 10xdigit10 is divisible by 11.
Help Harry to find the book!*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, f = 10, sum = 0;
    cin >> n;

    while (n > 0)
    {
        sum = sum + (f * (n % 10));
        f--;
        n = n / 10;
    }

    if (sum % 11 == 0)
        cout << "Legal ISBN";
    else
        cout << "Illegal ISBN";

    return 0;
}