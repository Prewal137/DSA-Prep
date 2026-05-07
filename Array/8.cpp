//Left rotate an array by d place without inbuilt reverse function
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void left_reverse(int a[],int start,int end)
{
    int temp;
    while(start<=end)
    {
        temp=a[end];
        a[end]=a[start];
        a[start]=temp;
        start++;
        end--;
    }
}
int main()
{
    int n,d;
    cout<<"Enter the array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the number of times left rotation needs to be done: ";
    cin>>d;
    cout<<"Before left rotation"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    d = d % n;
    left_reverse(a,0,d-1);
    left_reverse(a,d,n-1);
    left_reverse(a,0,n-1);
    cout<<"\nAfter left rotation"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}