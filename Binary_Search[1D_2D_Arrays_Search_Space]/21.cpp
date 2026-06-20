//Agressive Cows
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
    cout<<"Enter the no of cows : ";
    cin>>k;
    sort(a.begin(),a.end());
    int low=1;
    int high=a[n-1]-a[0];
    while(low<=high)
    {
        int mid=(low+high)/2;
        int noCows=1;
        int last=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]-last>=mid)
            {
                noCows++;
                last=a[i];
            }
        }
        if(noCows>=k)
            low=mid+1;
        else
            high=mid-1;
    }
    cout << "Maximum possible distance between cows = " << high << endl;
    return 0;
}