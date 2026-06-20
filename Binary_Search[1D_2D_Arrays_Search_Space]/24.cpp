//Split array - largest sum
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
        int noSplits=1;
        int currentSum=0;
        for(int i=0;i<n;i++)
        {
            if(currentSum+a[i]<=mid)
                currentSum+=a[i];
            else
            {
                noSplits++;
                currentSum=a[i];
            }
        }
        if(noSplits>k)
            low=mid+1;
        else
            high=mid-1;
    }
    cout << "Minimum no of Sum needed is  " << low << endl;
    return 0;
}