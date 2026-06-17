//Peak element in sorted array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements in sorted order: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
        cout<<"Peak element is at "<<0<<" index"<<endl;
    if(a[0]>a[1])
        cout<<"Peak element is at "<<0<< "index "<<endl;
    if(a[n-1]>a[n-2])
        cout<<"Peak element is at "<<n-1<<" index"<<endl;
    int low=1;
    int high=n-2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        {
            cout<<"Peak element is at "<<mid<<" index"<<endl;
            break;
        }
        else if(a[mid]>a[mid-1])
            low=mid+1;
        else if(a[mid]>a[mid+1])
            high=mid-1;
        else
            low=mid+1;//it can be high=mid-1;
    }
    return 0;
}