// Linear search in an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,key;
    cout<<"Enter the array size: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the key to be searched: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"Key found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Key not found in the array"<<endl;
    return 0;
}