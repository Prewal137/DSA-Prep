//Median of row-wise sorted 2D matrix
#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<vector<int>>&a,int n,int m,int mid)
{
    int maxValue=-1;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i][mid]>maxValue)
        {
            maxValue=a[i][mid];
            index=i;
        }
    }
    return index;
}
int main()
{
    int n,m;
    cout<<"Enter the number of row: ";
    cin>>n;
    cout<<"Enter the number of column: ";
    cin>>m;
    vector<vector<int>>a(n,vector<int>(m));
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int low=a[0][0];
    int high=a[0][m-1];
    for(int i=1;i<n;i++)
    {
        low=min(low,a[i][0]);
        high=max(high,a[i][m-1]);
    }
    int req=(n*m+1)/2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int count=0;
        for(int i=0;i<n;i++)
            count += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin();
        if(count<=req)
            low=mid+1;
        else
            high=mid-1;
    }
    cout<<"Median of row-wise sorted 2D matrix "<< low;
    return 0;
}