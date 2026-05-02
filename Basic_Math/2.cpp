//Find reverse of a number(leetcode 7)
#include <iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter the value of n: ";
    cin>>n;
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
    cout<<"Reverse of n is "<<rev<<endl;
    return 0;
}