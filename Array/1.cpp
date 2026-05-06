//Largest element in the array (easy)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(largest<arr[i])
            largest=arr[i];
    }
    cout<<"Largest element in the array is: "<<largest;
    return 0;
}