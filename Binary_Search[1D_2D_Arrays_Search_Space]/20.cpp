//Find the kth missing positive number using binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin >> a[i];
    int k;
    cout<<"Enter the place: ";
    cin>>k;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int missing=a[mid]-(mid+1);
        if(missing<k)
            low=mid+1;
        else
            high=mid-1;
    }
    cout << "Missing number = " << low+k << endl;
    return 0;
}