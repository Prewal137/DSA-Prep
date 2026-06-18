//Least capacity to ship packages within D days
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
    int days;
    cout<<"Enter the number of days: ";
    cin>>days;
    int low=*max_element(a.begin(),a.end());
    int high=accumulate(a.begin(),a.end(),0);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int day=1;
        int load=0;
        for(int i=0;i<n;i++)
        {
            if(load+a[i]>mid)
            {
                day++;
                load=a[i];
            }
            else
                load+=a[i];
        }
        if(day<=days)
            high=mid-1;
        else
            low=mid+1;
    }
    cout << "Least Capacity = " << low << endl;
    return 0;
}