//String to integer (atoi)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    if(s.length()==0)
        return 0;
    int i=0;
    while(i<s.size() && s[i]== ' ')
        i++;
    s=s.substr(i);
    int sign=+1;
    long ans=0;
    if(s[0]=='-')
        sign=-1;
    i=(s[0] == '+' || s[0] == '-')?1:0;
    int MAX=INT_MAX;
    int MIN=INT_MIN;
    while(i<s.length())
    {
        if(s[i] == ' ' || !isdigit(s[i]))
            break;
        ans=ans*10+s[i]-'0';
        if(sign==-1 && -1*ans<MIN)
        {
            cout<<"String to integer : "<<MIN;
            break;
        }
        if(sign==1 && ans>MAX)
        {
            cout<<"String to integer : "<<MAX;
            break;
        }
        i++;
    }
    cout<<"String to integer : "<<(int)(sign*ans);
    return 0;
}