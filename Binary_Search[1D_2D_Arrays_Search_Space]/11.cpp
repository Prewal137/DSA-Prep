//Find how many times the array is rotated
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements in sorted order: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[low]<=a[high])
        {
            ans=min(ans,a[low]);
            index=low;
            break;
        }
        if(a[low]<=a[mid])
        {
           ans=min(ans,a[low]);
           index=low;
           low=mid+1;
        }
        else
        {
            ans=min(ans,a[mid]);
            index=mid;
            high=mid-1;
        }
    }
    cout<<"Number of times the array is rotated is  "<<index<<endl;
    return 0;
}