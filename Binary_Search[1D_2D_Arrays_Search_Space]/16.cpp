//Koko eating bananas
#include<bits/stdc++.h>
using namespace std;
int Findmax(vector<int>&a)
{
    int maxi=INT_MIN;
    for(int i=0;i<a.size();i++)
    {
        maxi=max(maxi,a[i]);
    }
    return maxi;
}
long long calculatehours(vector<int>&a,int hours)
{
    long long totalhrs=0;
    for(int i=0;i<a.size();i++)
        totalhrs+=ceil((double)a[i]/(double)hours);
    return totalhrs;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin >> a[i];
    int h;
    cout<<"Enter the total hours: ";
    cin>>h;
    int low=1;
    int high=Findmax(a);
    int ans=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        long long totalhrs=calculatehours(a,mid);
        if(totalhrs<=h)
        {
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    cout<<"Minimum eating speed = "<<ans<<endl;
    return 0;
}