/*Consider All lowercase Alphabets of the English language. Here we consider each alphabet from a to z to have a certain weight.
 The weight of the alphabet a is considered to be 1, b to be 2, c to be 3 and so on until z has
 a weight of 26. In short, the weight of the alphabet a is 1, 
and the weight of all other alphabets is the weight of its previous alphabet + 1.
Now, you have been given a String S consisting of lowercase English characters. You need to find the summation of weight 
of each character in this String.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int sum = 0;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        sum += int(s[i] - 96);
    }

    cout << sum;
    return 0;
}