/*In this challenge, you are required to calculate and print the sum of the elements in an array, 
 keeping in mind that some of those integers may be quite large.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum;
    return 0;
}
