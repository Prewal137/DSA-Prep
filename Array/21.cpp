//Finding the majority element in an array using Boyer-Moore Voting Algorithm
// Majority element is the element that appears more than n/2 times in the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ele,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            ele=a[i];
        }
        else if(a[i]==ele)
            cnt++;
        else
            cnt--;
    }
    //The below steps r used only if the array may not contain majority
    int cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
            cnt1++;
    }
    if(cnt1>n/2)
        cout<<"Majority element in the array is "<<ele<<endl;
    else
        cout<<"There is no majority element in the array";
    return 0;
}