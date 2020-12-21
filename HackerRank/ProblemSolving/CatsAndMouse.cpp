#include<iostream>

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
