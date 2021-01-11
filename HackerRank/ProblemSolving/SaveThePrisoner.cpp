/*A jail has a number of prisoners and a number of treats to pass out to them. Their jailer decides the fairest way to divide the treats is to seat the prisoners around a circular table in sequentially numbered chairs. A chair number will be drawn from a hat. Beginning with the prisoner in that chair, one candy will be handed to each prisoner sequentially around the table until all have been distributed.

The jailer is playing a little joke, though. The last piece of candy looks like all the others, but it tastes awful. Determine the chair number occupied by the prisoner who will receive that candy.*/

#include<bits/stdc++.h>
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
