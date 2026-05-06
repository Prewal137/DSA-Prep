#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //swapping
    for(int i=0;i<=n-1;i++)
    {
      int j=i;
      while(j>0 && arr[j-1]>arr[j])
      {
          temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
          j--;
      }
    }
   
    // displaying
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}