//Sum of Beauty of All Substrings
#include<bits/stdc++.h>
using namespace std;
int getMaxCount(vector<int> &freq)
{
    int maxi=INT_MIN;
    for(auto count:freq)
        maxi=max(maxi,count);
    return maxi;
}
int getMinCount(vector<int> &freq)
{
    int mini=INT_MAX;
    for(auto count:freq)
    {
        if(count>0)
            mini=min(mini,count);
    }
    return mini;
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++)
    {
        vector<int>freq(26,0);
        for(int j=i;j<s.length();j++)
        {
            freq[s[j]-'a']++;
            ans+=getMaxCount(freq)-getMinCount(freq);
        }
    }
    cout<<"Sum of Beauty of All Substrings : "<<ans;
    return 0;
}