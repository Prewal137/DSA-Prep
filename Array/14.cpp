//Intersection of sorted arrays
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the array size: ";
    cin>>n1;
    vector<int>a(n1);
    cout<<"Enter the array elements: ";
    for(int k=0;k<n1;k++)
        cin>>a[k];
    cout<<"Enter the array size: ";
    cin>>n2;
    vector<int>b(n2);
    cout<<"Enter the array elements: ";
    for(int k=0;k<n2;k++)
        cin>>b[k];
    sort(a.begin(),a.end());
    for(int k=0;k<n1;k++)
        cout<<a[k]<<" ";
    cout<<endl;
    sort(b.begin(),b.end());
    for(int k=0;k<n2;k++)
        cout<<b[k]<<" ";
    cout<<endl;
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    cout<<"Intersection of sorted arrays\n";
    for(int k=0;k<ans.size();k++)
        cout<<ans[k]<<" ";
    
    return 0;
}