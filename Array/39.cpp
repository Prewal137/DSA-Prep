// Largest subarray with Zero sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    unordered_map<int,int>mpp;
    int sum=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
            maxi=i+1;
        else
        {
            if(mpp.find(sum)!=mpp.end())
                maxi=max(maxi,i-mpp[sum]);
            else
                mpp[sum]=i;
        }
    }
    cout << "Length of longest subarray with sum 0 = " << maxi;
    return 0;
 
}