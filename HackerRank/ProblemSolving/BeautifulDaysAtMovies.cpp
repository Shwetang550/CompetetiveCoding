#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,k,c=0;
    cin>>x>>y>>k;
    for(int i=x; i<=y; i++)
    {
        int n=i,rev=0;
        while(n>0)
        {
            int f;
            f=n%10;
            rev=rev*10+f;
            n=n/10;
        }
        if((i-rev)%k==0)
        c++;
    }
    cout<<c;
    return 0;
}
