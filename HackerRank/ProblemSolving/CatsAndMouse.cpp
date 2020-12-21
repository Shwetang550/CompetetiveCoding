/*Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

You are given  queries in the form of x, y, and z representing the respective positions for cats A and B, and for mouse C.

If cat  catches the mouse first, print Cat A.
If cat  catches the mouse first, print Cat B.
If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c,i=0,j=0;
        cin>>a>>b>>c;
        while(a!=c)// && b!=c)
        {
            if(a<c)
            {
                a++;
                i++;
            }
            else if(c<a)
            {
                a--;
                i++;
            }
        }
        while(b!=c)
        {
            if(b<c)
            {
                b++;
                j++;
            }
            else if(c<b)
            {
                b--;
                j++;
            }
        }
        if(i==j)
        cout<<"Mouse C"<<endl;
        else if(i<j)
        cout<<"Cat A"<<endl;
        else if(j<i)
        cout<<"Cat B"<<endl;
    }
    return 0;
}
