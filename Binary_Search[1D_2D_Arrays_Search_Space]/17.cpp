//Minimum days to make m bouquets
#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&a,int days,int m,int k)
{
    int cnt=0;
    int NoOfB=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<=days)
            cnt++;
        else
        {
            NoOfB+=(cnt/k);
            cnt=0;
        }
    }
    NoOfB+=(cnt/k);
    if(NoOfB>=m)
        return true;
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin >> a[i];
    int m, k;
    cout << "Enter number of bouquets (m): ";
    cin >> m;
    cout << "Enter flowers per bouquet (k): ";
    cin >> k;
    if(1LL * m * k > n)
    {
        cout << -1 << endl;
        return 0;
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    int low=mini;
    int high=maxi;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(isPossible(a,mid,m,k)==true)
            high=mid-1;
        else
            low=mid+1;
    }
    cout << "Minimum days = " << low << endl;
    return 0;
}