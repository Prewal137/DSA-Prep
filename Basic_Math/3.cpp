//Number is palindrome or not leetcode 9
#include <iostream>
using namespace std;
int main()
{
    int n,rev=0,dup;
   cout<<"Enter the value of n: ";
    cin>>n;
    dup=n; // this is to store the original value of n because we will be changing the value of n in the while loop
    while(n!=0)
    {
        int last_digit=n%10;
        n=n/10;
        if(rev>INT_MAX/10 || rev<INT_MIN/10) // this is to check if the reverse of the number is out of range or not
        {
           return 0;//leetcode asks this if the reverse of the number is out of range then return 0
        }
        rev=(rev*10)+last_digit;
    }
    if(dup==rev)
    {
        cout<<dup<<" is a palindrome number"<<endl;
    }
    else
    {
        cout<<dup<<" is not a palindrome number"<<endl;
    }
}