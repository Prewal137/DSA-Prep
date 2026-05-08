//Missing number in an array of size n containing numbers from 1 to n
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int> a(n-1);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    int XOR1 = 0, XOR2 = 0;
    for(int i=0;i<n-1;i++)
    {
        XOR1 = XOR1 ^ (i+1);
        XOR2 = XOR2 ^ a[i];
    }
    XOR1 = XOR1 ^ n;
    int misnum = XOR1 ^ XOR2;
    cout<<"Missing number is "<<misnum;
    return 0;
}