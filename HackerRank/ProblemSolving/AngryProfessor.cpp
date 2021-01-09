#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            k--;
        }
        if(k<=0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}
