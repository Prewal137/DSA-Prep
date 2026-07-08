// Subset Sums
#include<bits/stdc++.h>
using namespace std;
void findSubsetSum(int ind, int sum, vector<int> &arr, vector<int> &ans)
{
    if(ind == arr.size())
    {
        ans.push_back(sum);
        return;
    }
    findSubsetSum(ind + 1, sum + arr[ind], arr, ans);
    findSubsetSum(ind + 1, sum, arr, ans);
}
int main()
{
    vector<int> arr = {3,1,2};
    vector<int> ans;
    findSubsetSum(0, 0, arr, ans);
    sort(ans.begin(), ans.end());
    cout << "Subset Sums are :" << endl;
    for(auto x : ans)
        cout << x << " ";
    return 0;
}