/*A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, 
the professor decides to cancel class if fewer than some number of students are present when class starts. Arrival times go from on time (arrivalTime <= 0) to arrived late (arrivalTime > 0).*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            k--;
        }
        if(k<=0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}
