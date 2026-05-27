// Set Matrix Zeroes
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
    cout<<"Enter the matrix elements (make sure to add zeroes):\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix before set zero:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int col0=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                a[i][0]=0;
                if(j!=0)
                    a[0][j]=0;
                else
                    col0=0;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(a[i][j]!=0)
            {
                if(a[i][0]==0 || a[0][j]==0)
                    a[i][j]=0;
            }
        }
    }
    if(a[0][0]==0)
    {
        for(int j=0;j<m;j++)
            a[0][j]=0;
    }
    if(col0==0)
    {
        for(int i=0;i<n;i++)
            a[i][0]=0;
    }
    cout<<"\nMatrix after set zero:\n";
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