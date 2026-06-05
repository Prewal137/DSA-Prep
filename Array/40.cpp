//Number of subarray with xor k
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the target to be found: ";
    cin>>k;
    int xr=0,x,cnt=0;
    map<int,int>mpp;
    mpp[xr]++;
    for(int i=0;i<n;i++)
    {
        xr=xr^a[i];
        x=xr^k;
        cnt+=mpp[x];
        mpp[xr]++;
    }
    cout<<"Number of subarrays with XOR = "<<k<<" is "<<cnt;
    return 0;
}