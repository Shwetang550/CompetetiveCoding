/*HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly 5 people on social media.

On the first day, half of those 5 people (i.e., floor(5/2) = 2) like the advertisement and each shares it with 3 of their friends. At the beginning of the second day, floor(5/2) x 3 = 2 x 3 = 6 people receive the advertisement.

Each day, floor(recipients/2) of the recipients like the advertisement and will share it with 3 friends on the following day. Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day 1.*/

#include<bits/stdc++.h>
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
