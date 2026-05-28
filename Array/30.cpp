//Rotate matrix by 90 Degree
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the row size: ";
    cin>>n;
    int m;
    cout<<"Enter the column size: ";
    cin>>m;
    vector<vector<int>>a(n,vector<int>(m));
    cout<<"Enter the matrix elements:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix before rotation:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++)
        reverse(a[i].begin(),a[i].end());
    cout<<"\nMatrix after rotation:\n";
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}