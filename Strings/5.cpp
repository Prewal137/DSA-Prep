// Isomorphic Strings
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;
    unordered_map<char,char> mp1;
    unordered_map<char,char> mp2;
    bool flag = true;
    for(int i=0;i<s.length();i++)
    {
        char c1=s[i];
        char c2=t[i];
        if(mp1.count(c1)&&mp1[c1]!=c2)
        {
            flag=false;
            break;
        }
        if(mp2.count(c2)&& mp2[c2]!=c1)
        {
            flag=false;
            break;
        }
        mp1[c1]=c2;
        mp2[c2]=c1;
    }
    if(flag)
        cout<<"Strings are Isomorphic";
    else
        cout<<"Strings are Not Isomorphic";
    return 0;
}