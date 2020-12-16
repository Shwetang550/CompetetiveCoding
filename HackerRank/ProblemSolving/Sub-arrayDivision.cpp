/*Given a chocolate bar, two children, Lily and Ron, are determining how to share it. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

The length of the segment matches Ron's birth month, and,
The sum of the integers on the squares is equal to his birth day.
You must determine how many ways she can divide the chocolate.

Consider the chocolate bar as an array of squares, s=[2,2,1,3,2]. She wants to find segments summing to Ron's birth day, d=4 with a length equalling his birth month, m=2. In this case, there are two segments meeting her criteria: [2,2] and [1,3].*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n],d,m;
    for(int i=0; i<n; i++)
    cin>>a[i];
    cin>>d>>m;
    for(int i=0; i<=n-m; i++)
    {
        int s=0;
        for(int j=i; j<i+m; j++)
            s+=a[j];
        
        if(s==d)
            c++;
    }
    cout<<c;
    return 0;
}
