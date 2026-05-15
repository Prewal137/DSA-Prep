//Print subarray with maximum subarray sum(Kadane's algorithm)
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
    int maxi=INT_MIN,sum=0,ansStart=-1,ansEnd=-1,start;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
            start=i;
        sum=sum+a[i];
        if(sum>maxi)
        {
            maxi=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0)
            sum=0;
    }
    cout<<"Subarray with maximum subarray sum is \n ";
    for(int i=ansStart;i<=ansEnd;i++)
        cout<<a[i]<<" ";
    cout<<"\n"<<maxi;
    return 0;
}