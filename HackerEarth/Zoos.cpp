/*You are required to enter a word that consists of  and  
  that denote the number of Zs and Os respectively. 
  The input word is considered similar to word zoo if .
Determine if the entered word is similar to word zoo.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int x = 0, y = 0;

    for (int i = 0; n[i] != '\0'; i++)
    {
        // cin>>n[i];

        if (n[i] == 'z')
            ++x;

        else if (n[i] == 'o')
            ++y;
    }

    if (x * 2 == y)
        cout << "Yes";
    else
        cout << "No" << endl;

    return 0;
}