// Generate All Subsequences using Bit Manipulation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    int n = s.length();
    cout << "All Subsequences are :" << endl;
    for(int num = 0; num < (1 << n); num++)
    {
        string sub = "";
        for(int i = 0; i < n; i++)
        {
            if(num & (1 << i))
                sub += s[i];
        }
        cout << sub << endl;
    }
    return 0;
}