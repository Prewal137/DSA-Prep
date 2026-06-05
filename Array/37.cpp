// 3-sum problem
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
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=a[i]+a[j]+a[k];
            if(sum<target)
                j++;
            else if(sum>target)
                k--;
            else
            {
                vector<int>temp={a[i],a[j],a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && a[j]==a[j-1]) j++;
                while(j<k && a[k]==a[k+1]) k--;
            }
        }
    }
    cout<<"The triplets are\n";
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