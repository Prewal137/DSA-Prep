//Find the number that appears once in an array where every other element appears twice
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
    for(int i=0;i<n;i++)
        cin>>a[i];
    int XOR=0;
    for(int i=0;i<n;i++)
    {
        XOR=XOR^a[i];
    }
    cout<<"Number that appears once is "<<XOR;
    return 0;
}