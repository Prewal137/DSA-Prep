//Merge two sorted arrays without extra space
//Solution 1 using two pointers and sorting
#include<bits/stdc++.h>
using namespace std;
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
    cout<<"Enter the elements in array1 in sorted form: ";
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    int left=n-1;
    int right=0;
    while(left>=0 && right<m)
    {
        if(arr1[left]>arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else
            break;
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    cout<<"\nArray1: ";
    for(auto x : arr1)
        cout<<x<<" ";
    cout<<"\nArray2: ";
    for(auto x : arr2)
        cout<<x<<" ";
    return 0;
}