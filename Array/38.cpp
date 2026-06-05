// 4-sum problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int target;
    cout<<"Enter the target to be found: ";
    cin>>target;
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(i>0 && a[i]==a[i-1])
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(j>i+1 && a[j]==a[j-1])
                continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                long long sum=a[i];
                sum+=a[j];
                sum+=a[k];
                sum+=a[l];
                if(sum<target)
                    k++;
                else if(sum>target)
                    l--;
                else
                {
                    vector<int>temp={a[i],a[j],a[k],a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l&& a[k]==a[k-1]) k++;
                    while(k<l && a[l]==a[l+1]) l--;
                }
            }
        }
    }
    cout<<"The quads are\n";
    for(auto x : ans)
    {
        for(auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
 
}