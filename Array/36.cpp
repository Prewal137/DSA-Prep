//Majority element (n/3 times)
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
    int ele1=INT_MIN,ele2=INT_MIN;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(cnt1==0 && ele2!=a[i])
        {
            cnt1=1;
            ele1=a[i];
        }
        else if(cnt2==0 && ele1!=a[i])
        {
            cnt2=1;
            ele2=a[i];
        }
        else if(ele1==a[i])
            cnt1++;
        else if(ele2==a[i])
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(ele1==a[i])
            cnt1++;
        if(ele2==a[i])
            cnt2++;
    }
    vector<int>ls;
    int min=(int)(n/3)+1;
    if(cnt1>=min)
        ls.push_back(ele1);
    if(cnt2>=min)
        ls.push_back(ele2);
    sort(ls.begin(),ls.end());
    cout<<"The majority elements are: ";
    for(int x: ls)
        cout<<x<<" ";
    return 0;
 
}