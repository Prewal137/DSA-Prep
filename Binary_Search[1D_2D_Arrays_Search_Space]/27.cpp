//Find row with maximum number of 1's in a binary sorted matrix using binary search
#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&a,int m,int x)
{
    int low=0;
    int high=m-1;
    int ans=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return ans;
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
    int cnt_max=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int cnt_ones=m-lowerBound(a[i],m,1);
        if(cnt_ones>cnt_max)
        {
            cnt_max=cnt_ones;
            index=i;
        }
    }
    cout<<"Row with maximum 1's is : "<<index;
    return 0;
}