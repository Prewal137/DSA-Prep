// number hashing(occurance of each number in the array)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int hash[1000]={0};
    //precompute
    for(int i=0;i<n;i++)
        hash[arr[i]]+=1;
    int q;
    cout<<"Enter the number of queries : ";
    cin>>q;
    while(q--)
    {
    int number;
    cout<<"Enter the number to find its occurance : ";
    cin>>number;
    //fetch
    cout<<"Occurance of "<<number<<" is : "<<hash[number]<<endl;
    }
    return 0;

}