//Leaders in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxi=INT_MIN;
    vector<int>ans;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxi)
        {
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    sort(ans.begin(),ans.end());
    cout<<"Leaders in the array are:  \n";
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}