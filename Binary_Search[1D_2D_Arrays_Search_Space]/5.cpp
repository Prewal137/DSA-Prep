//Floor of a number in a sorted array
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
    int target;
    cout<<"Enter the target to be found: ";
    cin>>target;
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]<=target)
        {
            ans=a[mid];
            low=mid+1;
        }
        else
            high=mid-1;
    }
    cout<<"The floor of the array is "<<ans<<endl;
    return 0;
}