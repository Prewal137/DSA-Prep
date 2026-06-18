//Find the nth root of an integer using binary search
#include<bits/stdc++.h>
using namespace std;
int func(int mid,int m ,int n)
{
    long long ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*mid;
        if(ans>m)
            return 2;
    }
    if(ans==m)
        return 1;
    return 0;
}
int main()
{
    int n, m;
    cout << "Enter n (root degree): ";
    cin >> n;
    cout << "Enter m (number): ";
    cin >> m;
    int low=1;
    int high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(func(mid,m,n)==1)
        {
            cout<<"The "<<n<<"th square root of "<<m<<" is "<<mid<<endl;
            break;
        }
        else if(func(mid,m,n)==0)
            low=mid+1;
        else
            high=mid-1;
    }
    
    return 0;
}