//Palendromic substring
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int count = 0;
    for(int center = 0; center < s.length(); center++)
    {
        int left = center;
        int right = center;
        while(left >= 0 && right < s.length() && s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
        left = center;
        right = center + 1;
        while(left >= 0 && right < s.length() && s[left] == s[right])
        {
            count++;
            left--;
            right++;
        }
    }
    cout << "Number of Palindromic Substrings = " << count;
    return 0;
}