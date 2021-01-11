#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m,s;
        cin>>n>>m>>s;
        --s;
        s+=m;
        if(s>n)
        s=s%n;
        if(s==0)
        s=n;
        cout<<s<<endl;
    }
    return 0;
}
