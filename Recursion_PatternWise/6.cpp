// Generate Parentheses
#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void generate(string &curr, int n, int open, int close)
{
    if(curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if(open < n)
    {
        curr.push_back('(');
        generate(curr, n, open + 1, close);
        curr.pop_back();
    }
    if(close < open)
    {
        curr.push_back(')');
        generate(curr, n, open, close + 1);
        curr.pop_back();
    }
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    string curr = "";
    generate(curr, n, 0, 0);
    cout << "Valid Parentheses are :" << endl;
    for(auto x : ans)
        cout << x << endl;
    return 0;
}