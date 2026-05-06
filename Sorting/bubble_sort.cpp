#include<iostream>
using namespace std;
int main()
{
    int n,temp,didSwap=0;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //swapping
    for(int i=n-1;i>=1;i--)
    {
       for(int j=0;j<=i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
               didSwap=1;
           }
       }
       if(didSwap==0)
            break;
    }
    //cout<<"runs"; will show how many times the outer loop runs if we want to check the time complexity of the algorithm
    // displaying
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}