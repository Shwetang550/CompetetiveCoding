/*Lily likes to play games with integers. She has created a new game where she determines the difference between a number and its reverse. For instance, given the number 12, its reverse is 21. Their difference is 9. The number 120 reversed is 21, and their difference is 99.

She decides to apply her game to decision making. She will look at a numbered range of days and will only go to a movie on a beautiful day.

Given a range of numbered days, |i...j| and a number k, determine the number of days in the range that are beautiful. Beautiful numbers are defined as numbers where |i-reverse(i)| is evenly divisible by k. If a day's value is a beautiful number, it is a beautiful day. Return the number of beautiful days in the range.*/

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
