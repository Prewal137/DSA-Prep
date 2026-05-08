// Longest subarray with sum k (positives only no zeros and non negatives)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the sum: ";
    cin>>k;
    int left=0,right=0;
    int sum=a[0];
    int maxLen=0;
    while(right<n)
    {
        if(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n)
            sum+=a[right];
    }
    cout<<"Longest subarray with sum "<<k<<" is "<<maxLen;
    return 0;
}