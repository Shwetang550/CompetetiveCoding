/*When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

There is a list of 26 character heights aligned by index to their letters. For example, 'a' is at index 0 and 'z' is at index 25. There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in mm^2 assuming all letters are 1mm wide.*/

#include<bits/stdc++.h>
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
