//Minimum add to make Parenthesis valid
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int size=0;
    int open=0;
    for(auto ch:s)
    {
        if(ch=='(')
            size++;
        else if(ch==')' && size>0)
            size--;
        else
            open++;
    }
    cout<<"Minimum add to make Parenthesis valid : "<<size+open;
    return 0;
}