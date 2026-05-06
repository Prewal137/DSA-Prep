//Check if array is sorted and rotated(sorted already done 3.cpp)
//leetcode 1752. Check if Array Is Sorted and Rotated
#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&arr,int n)
{
  int count=0;
  for(int i=0;i<n;i++)
  {
  if(arr[i]>arr[(i+1)%n])//%n is used to check the last element with the first element of the array
    count++;             // check if sorted if not it breaks and count increases
  }
  if(count>1)
    return false;
  else
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
    if(check(arr,n)==1)
        cout<<"Given array is sorted and in rotated form";
    else
        cout<<"Given array is not sorted and not in rotated form";
    return 0;
}