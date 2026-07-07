// Print All Subsequences with Sum K
#include<bits/stdc++.h>
using namespace std;
void printSubsequence(int index, vector<int> &ds, int sum, int currSum, vector<int> &arr)
{
    if(index == arr.size())
    {
        if(currSum == sum)
        {
            for(auto it : ds)
                cout << it << " ";

            cout << endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    currSum += arr[index];
    printSubsequence(index + 1, ds, sum, currSum, arr);
    currSum -= arr[index];
    ds.pop_back();
    printSubsequence(index + 1, ds, sum, currSum, arr);
}
int main()
{
    vector<int> arr = {1,2,1};
    int sum;
    cout << "Enter the required sum : ";
    cin >> sum;
    vector<int> ds;
    cout << "Subsequences are :" << endl;
    printSubsequence(0, ds, sum, 0, arr);
    return 0;
}