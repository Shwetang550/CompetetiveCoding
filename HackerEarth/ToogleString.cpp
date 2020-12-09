/*You have been given a String S consisting of uppercase and lowercase English alphabets. 
You need to change the case of each alphabet in this String. That is, all the uppercase letters should be 
converted to lowercase and all the lowercase letters should be converted to uppercase. 
You need to then print the resultant String to output.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 97)
            s[i] -= 32;
        else
            s[i] += 32;
    }

    cout << s << endl;
    return 0;
}