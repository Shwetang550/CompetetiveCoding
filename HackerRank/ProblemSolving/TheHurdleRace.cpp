/*A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying 
heights, and the characters have a maximum height they can jump. There is a magic potion 
they can take that will increase their maximum jump height by 1 unit for each dose. How many doses of 
the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, 
return 0.*/

#include<bits/stdc++.h>
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
