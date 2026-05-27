// Longest Consecutive Sequence(Google Interview Question)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int longest=1;
    unordered_set<int>ans;
    for(int i=0;i<n;i++)
        ans.insert(a[i]);
    for(auto it:ans)
    {
        if(ans.find(it-1)==ans.end())
        {
            int cnt=1;
            int x=it;
            while(ans.find(x+1)!=ans.end())
            {
                cnt++;
                x++;
            }
            longest=max(longest,cnt);
        }
    }
    cout<<"The longest consecutive sequence is: "<<longest;
    return 0;
}