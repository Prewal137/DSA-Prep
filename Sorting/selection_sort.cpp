#include<iostream>
using namespace std;
int main()
{
    int n,min,temp;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //swapping
    for(int i=0;i<=n-2;i++)
    {
        min=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    // displaying
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}