//Generate Binary Strings of Length N without Consecutive 1's
#include<bits/stdc++.h>
using namespace std;
void generate(string str, int n, vector<string> &ans)
{
    if(str.length() == n)
    {
        ans.push_back(str);
        return;
    }
    generate(str + "0", n, ans);
    if(str.empty() || str.back() != '1')
        generate(str + "1", n, ans);
}
int main()
{
    int n = 3;
    vector<string> ans;
    generate("", n, ans);
    for(auto x : ans)
        cout << x << endl;
}