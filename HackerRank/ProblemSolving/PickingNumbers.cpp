#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,mx=0,sum=0,a[101],c[99]={0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }

    for(int i=1; i<100; i++)
    {
        if(mx<c[i] && sum<(c[i]+max(c[i-1],c[i+1])))
        {
            mx=c[i];
            s=max(c[i-1],c[i+1]);
            sum=mx+s;
        }
    }
    cout<<sum;
    return 0;
}
