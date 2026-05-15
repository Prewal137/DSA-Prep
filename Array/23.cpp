//Stock buy and sell
//Best time to buy and sell stock
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mini=a[0],profit=0;
    for(int i=1;i<n;i++)
    {
        int cost=a[i]-mini;
        profit=max(profit,cost);
        mini=min(a[i],mini);
    }
    cout<<"Profit is: "<<profit;
    return 0;
}