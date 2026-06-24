//Sort characters by frequency
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    unordered_map<char,int>freq;
    for(auto ch:s)
        freq[ch]++;
    vector<vector<char>>bucketData(s.length()+1);
    for(auto [ch,fq]:freq)
        bucketData[fq].push_back(ch);
    string ans="";
    for(int fq=s.length();fq>=1;fq--)
    {
        for(auto ch:bucketData[fq])
            ans.append(fq,ch);
    }
    cout<<"Frequency sorted string : "<<ans;
    return 0;
}