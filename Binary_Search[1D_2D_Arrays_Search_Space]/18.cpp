//Find the smallest divisor given the threshold using binary search
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
    int threshold;
    cout<<"Enter the threshold: ";
    cin>>threshold;
    if(n>threshold)
    {
        cout << -1 << endl;
        return 0;
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
    }
    int low=1;
    int high=maxi;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=ceil((double)a[i]/(double)mid);
        }
        if(sum<=threshold)
            high=mid-1;
        else
            low=mid+1;
    }
    cout << "Smallest divisor = " << low << endl;
    return 0;
}