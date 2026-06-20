//Painters Partition Problem
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
    cout<<"Enter the no of students : ";
    cin>>k;
    int low=*max_element(a.begin(),a.end());
    int high=accumulate(a.begin(),a.end(),0);
    while(low<=high)
    {
        int mid=(low+high)/2;
        int noPainters=1;
        int currentBlock=0;
        for(int i=0;i<n;i++)
        {
            if(currentBlock+a[i]<=mid)
                currentBlock+=a[i];
            else
            {
                noPainters++;
                currentBlock=a[i];
            }
        }
        if(noPainters>k)
            low=mid+1;
        else
            high=mid-1;
    }
    cout << "Minimum no of blocks needed is  " << low << endl;
    return 0;
}