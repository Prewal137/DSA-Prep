//Right rotate an array by d place with inbuilt reverse function
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cout<<"Enter the array size: ";
    cin>>n;
    //int a[n];
    vector<int> a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the number of times right rotation needs to be done: ";
    cin>>d;
    cout<<"Before right rotation"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    d = d % n;
    //reverse(a, a+d); 
    reverse(a.begin(),a.begin()+(n-d));
    //reverse(a+d, a+n);
    reverse(a.begin()+(n-d),a.end());
    //reverse(a, a+n);
    reverse(a.begin(),a.end());
    cout<<"\nAfter right rotation"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}