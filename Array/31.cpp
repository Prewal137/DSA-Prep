//Print the matrix in spiral form
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

    vector<vector<int>> a(n, vector<int>(m));

    vector<int> ans;   // 1D vector

    cout<<"Enter the matrix elements:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Original matrix is:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int top=0;
    int bottom=n-1;
    int left=0;
    int right=m-1;

    while(left<=right && top<=bottom)
    {
        // left -> right
        for(int i=left;i<=right;i++)
            ans.push_back(a[top][i]);

        top++;

        // top -> bottom
        for(int i=top;i<=bottom;i++)
            ans.push_back(a[i][right]);

        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
                ans.push_back(a[bottom][i]);

            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
                ans.push_back(a[i][left]);

            left++;
        }
    }

    cout<<"Spiral matrix is:\n";

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}