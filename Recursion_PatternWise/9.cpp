// Combination Sum
#include<bits/stdc++.h>
using namespace std;
void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if(ind == arr.size())
    {
        if(target == 0)
            ans.push_back(ds);

        return;
    }
    if(arr[ind] <= target)
    {
        ds.push_back(arr[ind]);

        findCombination(ind, target - arr[ind], arr, ans, ds);

        ds.pop_back();
    }
    findCombination(ind + 1, target, arr, ans, ds);
}
int main()
{
    vector<int> arr = {2,3,6,7};
    int target;
    cout << "Enter the target : ";
    cin >> target;
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, arr, ans, ds);
    cout << "Possible Combinations are :" << endl;
    for(auto it : ans)
    {
        for(auto x : it)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}