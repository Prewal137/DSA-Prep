// Combination Sum II
#include<bits/stdc++.h>
using namespace std;
void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if(target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for(int i = ind; i < arr.size(); i++)
    {
        if(i > ind && arr[i] == arr[i - 1])
            continue;
        if(arr[i] > target)
            break;
        ds.push_back(arr[i]);
        findCombination(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}
int main()
{
    vector<int> arr = {10,1,2,7,6,1,5};
    int target;
    cout << "Enter the target : ";
    cin >> target;
    sort(arr.begin(), arr.end());
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