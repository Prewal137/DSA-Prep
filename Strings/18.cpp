//First occurrence index in a string
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string haystack, needle;
    cout << "Enter the haystack: ";
    cin >> haystack;
    cout << "Enter the needle: ";
    cin >> needle;
    int m = haystack.size();
    int n = needle.size();
    int ans = -1;
    for(int i = 0; i <= m - n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(haystack[i + j] != needle[j])
                break;
            if(j == n - 1)
            {
                ans = i;
                break;
            }
        }
        if(ans != -1)
            break;
    }
    cout << "First occurrence index: " << ans << endl;
    return 0;
}