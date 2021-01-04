#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int a[26];
    for(int i=0; i<26; i++)
    cin>>a[i];
    string s;
    cin>>s;
    int max=0,int_ch;
    for(int i=0; s[i]!='\0'; i++)
    {
        char ch=s[i];
        int_ch=(int)ch;
        int_ch-=97;
        if(max<a[int_ch])
        max=a[int_ch];
    }
    cout<<max*s.length();
    return 0;
}
