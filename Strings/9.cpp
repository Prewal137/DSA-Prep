//Maximum nesting depth of parenthesis
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int res=0,curr=0;
    for(auto ch:s)
    {
        if(ch=='(')
        {
            curr++;
            res=max(res,curr);
        }
        if(ch==')')
            curr--;
    }
    cout<<"Maximum nesting depth parenthese : "<<res;
    return 0;
}