//Longest palindrome substring
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    if(s.length()<=1)
        cout<<"Longest palindromic substring is :"<<s;
    int start=0;
    int maxLen=1;
    for(int i=1;i<s.length();i++)
    {
        int l=i-1;
        int r=i;
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            if(r-l+1>maxLen)
            {
                maxLen=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
        l=i-1;
        r=i+1;
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            if(r-l+1>maxLen)
            {
                maxLen=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
    }
    cout<<"Longest palindromic substring is :"<<s.substr(start,maxLen);
    return 0;
}