//Second largest and smallest
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int s_largest(vector<int> &arr,int n)
{
    int largest=arr[0];
    int slargest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(largest<arr[i])
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(largest>arr[i] && arr[i]>slargest)
            slargest=arr[i];
    }
    return slargest;
}
int s_smallest(vector<int> &arr,int n)
{
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(smallest>arr[i])
        {
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(smallest<arr[i] && arr[i]<ssmallest)
            ssmallest=arr[i];
    }
    return ssmallest;
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
    int second_largest=s_largest(arr,n);
    int second_smallest=s_smallest(arr,n);
    cout<<"Second Largest number is "<<second_largest<<endl;
    cout<<"Second Smallest number is "<<second_smallest<<endl;
    return 0;
}