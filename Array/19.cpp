// Two sum problems return the indices of the two numbers such that they add up to a specific target.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the target: ";
    cin>>target;
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        int a=arr[i];
        int b=target-a;
        if(mpp.find(b)!=mpp.end())
        {
            cout << " The index of two numbers that sum up the target "<< target<< " is "<< mpp[b] << " " << i;
        }    
        mpp[a]=i;
    }
    
    return 0;
}