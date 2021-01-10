#include<iostream>

using namespace std;

int main()
{
    int n,sum=0,rec=5;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum+=rec/2;
        rec=(rec/2)*3;
    }
    cout<<sum;
    return 0;
}
