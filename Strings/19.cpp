// Shortest palindrome
#include<bits/stdc++.h>
using namespace std;

void computeLPS(string pattern, vector<int> &lps)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i < pattern.length())
    {
        if(pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len != 0)
                len = lps[len - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    string temp = s + "-" + rev;
    vector<int> lps(temp.length(), 0);
    computeLPS(temp, lps);
    int longestLength = lps[temp.length() - 1];
    string culprit = rev.substr(0, s.length() - longestLength);
    cout << "Shortest Palindrome: " << culprit + s << endl;
    return 0;
}