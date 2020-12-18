#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,b;
    cin>>n>>k;
    int a[n],sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    cin>>b;
    sum=sum-a[k];

    if(b-(sum/2)==0)
    cout<<"Bon Appetit";
    else
    cout<<b-(sum/2);

    return 0;    
}
