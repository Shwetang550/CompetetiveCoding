#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0;
        cin>>n;
        for(int i=0; i<=n; i++)
        {
            if(m%2!=0)
            m*=2;
            else 
            m++;
        }       
        cout<<m<<endl; 
    }
    return 0;
}
