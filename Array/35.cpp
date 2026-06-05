//Pascal Triangle
//Given n rows, print the Pascal triangle.
// We have to return a list of list

#include<bits/stdc++.h>
using namespace std;
vector<int> generateRow(int r)
{
    long long ans=1;
    vector<int>ansRow;
    ansRow.push_back(1);
    for(long long i=1;i<r;i++)
    {
        ans=ans*(r-i);
        ans=ans/i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>>pascalTriangle(int n)
{
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    vector<vector<int>>ans = pascalTriangle(n);
    cout << "The Pascal Triangle with " << n << " rows is:\n";
    for(auto row : ans)
    {
        for(auto x : row)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}