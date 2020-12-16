/*Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

For example, assume her scores for the season are represented in the array scores=[12,24,10,24]. Scores are in the same order as the games played. She would tabulate her results as follows:

                                 Count
Game  Score  Minimum  Maximum   Min Max
 0      12     12       12       0   0
 1      24     12       24       0   1
 2      10     10       24       1   1
 3      24     10       24       1   1
Given the scores for a season, find and print the number of times Maria breaks her records for most and least points scored during the season.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,min,max;
    cin>>n;
    int a[n],c=0,c1=0;

    for(int i=0; i<n; i++)
    cin>>a[i];

    min=a[0];
    max=a[0];

    for(int i=1; i<n; i++)
    {
        if(max<a[i])
        {
            c++;
            max=a[i];
        }

        if(min>a[i])
        {
            c1++;
            min=a[i];
        }
    }

    cout<<c<<" "<<c1;
    return 0;
}
