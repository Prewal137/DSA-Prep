// Search element in rotated sorted array-2 (duplicate elements)
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
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            cout << "true" << endl;
            return 0;
        }
        if(a[low]==a[mid] && a[mid]==a[high])
        {
            low=low+1;
            high=high-1;
            continue;
        }
        if(a[low]<=a[mid])
        {
            if(a[low]<=target && target<=a[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else
        {
            if(a[mid]<=target && target<=a[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    cout << "false" << endl;
    return 0;
}