//Maximum Product Subarray
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
    int prefix=1;
    int suffix=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix=prefix*a[i];
        suffix=suffix*a[i];
        maxi=max(maxi,max(prefix,suffix));
    }
    cout<<"Maximum Product Subarray is: "<<maxi<<endl;
    return 0;
}