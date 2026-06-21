// Search element in 2D matrix-1
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
    int low=0;
    int high=n*m-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int row=mid/m;
        int col=mid%m;
        if(a[row][col]==target)
        {
            cout<<"Target is found at: "<<row<<","<<col;
            break;
        }
        else if(a[row][col]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return 0;
}