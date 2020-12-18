/*Two friends Anna and Brian, are deciding how to split the bill at a dinner. 
Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. 
You must determine if his calculation is correct.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,b;
    cin>>n>>k;
    int a[n],sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    cin>>b;
    sum=sum-a[k];

    if(b-(sum/2)==0)
    cout<<"Bon Appetit";
    else
    cout<<b-(sum/2);

    return 0;    
}
