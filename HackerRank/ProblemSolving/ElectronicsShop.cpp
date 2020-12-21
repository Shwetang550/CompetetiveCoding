#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    long long int key[n],usb[m],sum=0;
    for(int i=0; i<n; i++)
    cin>>key[i];
    for(int i=0; i<m; i++)
    cin>>usb[i];
    //sum=key[0]+usb[0];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if((key[i]+usb[j])>=sum && (key[i]+usb[j])<=b)
            sum=key[i]+usb[j];
        }
    }
    if(sum>b || sum==0)
    cout<<"-1";
    else
    cout<<sum;
    return 0;
}
