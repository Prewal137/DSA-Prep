// Remove Outermost Parentheses
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    string ans="";
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==')')
            count--;
        if(count!=0)
            ans.push_back(s[i]);
        if(s[i]=='(')
            count++;
    }
    cout<<"String after removing outermost parentheses is : "<<ans;
    return 0;
}

