//Valid Anagram
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    if(s.length() != t.length())
    {
        cout << "Not Anagrams";
        return 0;
    }
    unordered_map<char, int> mp;
    for(auto ch : s)
        mp[ch]++;
    bool flag = true;
    for(auto ch : t)
    {
        mp[ch]--;
        if(mp[ch] < 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";
    return 0;
}