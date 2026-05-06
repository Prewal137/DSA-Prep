// Remove duplicates from the given sorted array in non-descending order and return the number of distinct elements
// leetcode 26. Remove Duplicates from Sorted Array
#include<iostream>
#include<vector>
using namespace std;
int removedup(vector<int> &arr,int n)
{
    int k=0;
    for(int i=1;i<n;i++)
    {
        if(arr[k]!=arr[i])
        {
            arr[k+1]=arr[i];
            k++;
        }
    }
    return k+1;
}
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int unique=removedup(arr,n);
    cout<<"Unique elements after removing duplicates is "<<unique;
    return 0;
}
