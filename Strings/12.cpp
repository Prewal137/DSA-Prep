//Count Number of substrings
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int n=s.length();
    int ans=(n*(n+1)/2);
    cout<<"Number of substrings is : "<<ans;
    return 0;
}