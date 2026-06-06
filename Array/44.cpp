// Find the missing and repeating numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long sn=(n*(n+1))/2;
    long long s2n=(n*(n+1)*(2*n+1))/6;
    long long s=0,s2=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        s2+=(long long)a[i]*(long long)a[i];
    }
    long long val1=s-sn;
    long long val2=s2-s2n;
    val2=val2/val1;
    long long x=(val1+val2)/2;
    long long y=x-val1;
    cout<<"The repeating number is: "<<(int)x<<" and the missing number is: "<<(int)y<<endl;
    return 0;
}