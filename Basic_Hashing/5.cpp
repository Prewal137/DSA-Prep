// Finding highest and lowest frequency of a number in the array using map
#include <iostream>
#include<map>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the array size : ";
  cin>>n;
  int arr[n];
  map<int,int> hash;
  cout<<"Enter the array elements : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    hash[arr[i]]++;
  }
  int maxFreq=0;
  int minFreq=n;
  int maxnum,minnum;
  for(auto it : hash)
  {
    if(maxFreq<it.second)
    {
        maxFreq=it.second;
        maxnum=it.first;
    }
    if(minFreq>it.second)
    {
        minFreq=it.second;
        minnum=it.first;
    }
  }
    cout<<"Number with highest frequency is : "<<maxnum<<" and its frequency is : "<<maxFreq<<endl;
    cout<<"Number with lowest frequency is : "<<minnum<<" and its frequency is : "<<minFreq<<endl;
  return 0; 
}