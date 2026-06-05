//Merge Overlapping Intervals
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of intervals: ";
    cin>>n;
    vector<vector<int>>a(n,vector<int>(2));
    cout<<"Enter the intervals: ";
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(ans.empty() || a[i][0]>ans.back()[1])
            ans.push_back(a[i]);
        else
            ans.back()[1]=max(ans.back()[1],a[i][1]);
    }
    cout << "\nMerged Intervals:\n";
    for(auto row : ans)
    {
        cout << "(" << row[0] << "," << row[1] << ") ";
    }
    return 0;
}