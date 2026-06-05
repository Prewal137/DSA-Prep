//Merge two sorted arrays without extra space
//Solution 2 using the gap method
#include<bits/stdc++.h>
using namespace std;
void swapIfGreater(vector<int>& arr1, vector<int>& arr2, int ind1, int ind2)
{
    if(arr1[ind1] > arr2[ind2])
    {
        swap(arr1[ind1], arr2[ind2]);
    }
}
int main()
{
    int n,m;
    cout<<"Enter the number of elements in array1: ";
    cin>>n;
    cout<<"Enter the number of elements in array2: ";
    cin>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);
    cout<<"Enter the elements in array1 in sorted form: ";
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"Enter the elements in array2 in sorted form: ";
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    int len=n+m;
    int gap=(len/2)+(len%2);
    while(gap>0)
    {
        int left=0;
        int right=left+gap;
        while(right<len)
        {
            if(left<n && right>=n)
                swapIfGreater(arr1,arr2,left,right-n);
            else if(left>=n)
                swapIfGreater(arr2,arr2,left-m,right-m);
            else
                swapIfGreater(arr1,arr1,left,right);
            left++;
            right++;
        }
        if(gap==1) break;
        gap=(gap/2)+(gap%2);
    }
    cout<<"\nArray1: ";
    for(auto x : arr1)
        cout<<x<<" ";
    cout<<"\nArray2: ";
    for(auto x : arr2)
        cout<<x<<" ";
    return 0;
}