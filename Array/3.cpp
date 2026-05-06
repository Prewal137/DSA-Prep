//Check if array is sorted or not 
#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>&arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            
        }
        else
            return false;
    }
    return true;
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
    if(isSorted(arr,n)==1)
        cout<<"Given array is sorted";
    else
        cout<<"Given array is not sorted";
    return 0;
}