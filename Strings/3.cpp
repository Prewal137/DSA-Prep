//Largest Odd number in a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--)
    {
        if((s[i]-'0')%2==1)
        {
            cout<<"Largest Odd integer is : "<<s.substr(0,i+1);
            break;
        }
    }
    return 0;
}