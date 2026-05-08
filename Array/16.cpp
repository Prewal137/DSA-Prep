//Maximum consecutive ones in an array
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            maxi=max(maxi,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<"Maximum consecutive ones in an array "<<maxi;
    return 0;
}