// Reverse Pairs
//a[i] > 2*a[j] and i<j
#include <iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    int cnt=0;
    while(left<=mid && right<=high)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
        arr[i]=temp[i-low];
}
int CountPair(vector<int> &arr,int low,int mid,int high)
{
    int cnt=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && arr[i]>2*arr[right])
            right++;
        cnt=cnt+(right-(mid+1));
    }
    return cnt;
}
int mergeSort(vector<int> &arr,int low,int high)
{
    int cnt=0;
    if(low>=high)
        return cnt;
    int mid=(low+high)/2;
    cnt+=mergeSort(arr,low,mid);
    cnt+=mergeSort(arr,mid+1,high);
    cnt+=CountPair(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
}
int ReversePair(vector<int>&arr,int n)
{
    return mergeSort(arr,0,n-1);
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
    int cnt = ReversePair(arr, n);
    cout << "The number of inversions are: " << cnt << endl;
    return 0;
}