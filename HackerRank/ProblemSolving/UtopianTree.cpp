/*The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after  growth cycles?*/

#include<bits/stdc++.h>
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
