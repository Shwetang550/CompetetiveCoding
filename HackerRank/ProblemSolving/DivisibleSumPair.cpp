/*You are given an array of n integers, ar=[ar[0],ar[1],...,ar[n-1]], and a positive integer, k. 
 Find and print the number of (i,j) pairs where i<j and ar[i] + ar[j] is divisible by k.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],c=0;

    for(int i=0; i<n; i++)
    cin>>a[i];

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((a[i]+a[j])%k==0)
            c++;
        }
    }

    cout<<c;
    return 0;
}
