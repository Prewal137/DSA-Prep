//First and Last Occurence of an element in a sorted array
#include<bits/stdc++.h>
using namespace std;
int First(vector<int>a,int n,int target)
{
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            first=mid;
            high=mid-1;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return first;
}
int Last(vector<int>a,int n,int target)
{
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            last=mid;
            low=mid+1;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
            high=mid-1;
    }
    return last;
}
pair<int,int>FirstLastOccurence(vector<int>a,int n,int target)
{
    int first=First(a,n,target);
    if(first==-1)
        return {-1,-1};
    int last=Last(a,n,target);
    return{first,last};
}
int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements in sorted order: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int target;
    cout<<"Enter the target to be found: ";
    cin>>target;
    pair<int,int> ans = FirstLastOccurence(a,n,target);
    cout<<"First Occurrence = "<<ans.first<<endl;
    cout<<"Last Occurrence = "<<ans.second<<endl;
    return 0;
}