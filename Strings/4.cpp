// Longest common prefix in strings
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;
    vector<string> strs(n);
    cout<<"Enter the strings:\n";
    for(int i=0;i<n;i++)
        cin>>strs[i];
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n-1];
    string ans = "";
    for(int i=0; i<first.length() && i<last.length(); i++)
    {
        if(first[i] != last[i])
            break;
        ans += first[i];
    }
    cout<<"Longest common prefix is: "<<ans;
    return 0;
}