#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a,max=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(max<a)
        max=a;
    }
    if(max<k)
    cout<<"0";
    else
    cout<<max-k;
    return 0;
}
