// sortin 0's 1's and 2's(Dutch National Flag Algorithm)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
            mid++;
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}