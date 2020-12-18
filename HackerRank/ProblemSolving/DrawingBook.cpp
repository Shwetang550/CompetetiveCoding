#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,pf,pl;
    cin>>n>>p;
    pf=p/2;
    if((p/2)<((n/2)-(p/2)))
    cout<<p/2;
    else
    cout<<(n/2)-(p/2);
    return 0;
}
