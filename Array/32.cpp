//Number of sub arrays with sum k
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
    int k;
    cout<<"Enter the sum be found: ";
    cin>>k;
    unordered_map<int,int>mpp;
    int preSum=0; int cnt=0;
    mpp[0]=1;
    for(int i=0;i<n;i++)
    {
        preSum+=a[i];
        int rem=preSum-k;
        cnt+=mpp[rem];
        mpp[preSum]+=1;
    }
    cout<<"Total number of sub arrays with sum k: "<<cnt;
    return 0;
}