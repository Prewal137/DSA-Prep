// Reverse of array using recursion(one pointer approach)
#include<iostream>
using namespace std;

void rev(int i,int n,int a[])
{
    if(i>=n/2)
    return;
    swap(a[i],a[n-i-1]);
    rev(i+1,n,a);

}
int main()
{
    int a[50],n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    rev(0,n,a);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;

}