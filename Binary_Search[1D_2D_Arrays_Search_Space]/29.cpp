//Search element in 2D matrix-2
#include<bits/stdc++.h>
using namespace std;
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
    int target;
    cout<<"Enter the target to be found: ";
    cin>>target;
    int row=0;
    int col=m-1;
    while(row<n && col>=0)
    {
        if(a[row][col]==target)
        {
            cout<<"Target found at "<<row<<" , "<<col;
            break;
        }
        else if(a[row][col]<target)
            row++;
        else
            col--;
    }
    return 0;
}