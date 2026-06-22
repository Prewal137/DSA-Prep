// Peak element in 2D array
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
    int low=0;
    int high=m-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int row=maxElement(a,n,m,mid);
        int left=mid-1>=0?a[row][mid-1]:-1;
        int right=mid+1<m?a[row][mid+1]:-1;
        if(a[row][mid]>left && a[row][mid]>right)
        {
            cout<<"Peak element is : "<<a[row][mid];
            break;
        }
        else if(a[row][mid]<left)
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}