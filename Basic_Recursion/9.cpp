// Reverse of array using recursion(two pointer approach)
#include<iostream>
using namespace std;
int n;
void rev(int f,int l,int a[])
{
    if(f>=l)
    return;
    swap(a[f],a[l]);
    rev(f+1,l-1,a);
   

}

int main()
{
    int a[50];
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter elements in the array : ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    rev(0,n-1,a);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}