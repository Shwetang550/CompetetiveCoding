/*You have been asked to help study the population of birds migrating across the continent. Each type of bird you 
are interested in will be identified by an integer value. Each time a particular kind of bird is spotted, 
its id number will be added to your array of sightings. You would like to be able to find out 
which type of bird is most common given a list of sightings. Your task is to print the type number of that bird and 
if two or more types of birds are equally common, choose the type with the smallest ID number.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,c;
    cin>>n;
    int a[n],bird[6]{0};
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        bird[a[i]]++;
    }
    
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(max<bird[j])
            {
                max=bird[j];
                c=j;
            }
        }
    }
    cout<<c;
    return 0;
}
