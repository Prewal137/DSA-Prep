//Left rotate an array by one place
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i =0;i<n;i++)
        cin>>a[i];
    cout<<"Before one left rotation"<<endl;
    for(int i =0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\nAfter one left rotation"<<endl;
    int temp=a[0];
    for(int i=1;i<n;i++)
        a[i-1]=a[i];
    a[n-1]=temp;
    for(int i =0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}