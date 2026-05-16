//Rearrange array in alternating positive & negative items (pos==neg)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int pos=0,neg=1;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            ans[pos]=a[i];
            pos+=2;
        }
        else
        {
            ans[neg]=a[i];
            neg+=2;
        }
    }
    cout<<"Rearranged array in alternating positive & negative items: \n";
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}