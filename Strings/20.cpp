//Longest happy prefix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    //if(s.empty()) return "";
    vector<int>lps(s.length(),0);
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<s.length())
    {
        if(s[i]==s[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
                len=lps[len-1];
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
    cout << "Longest Happy Prefix is : " << s.substr(0,lps[s.length()-1]) << endl;
    return 0;
}