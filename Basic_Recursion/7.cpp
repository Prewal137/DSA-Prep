//Print sum of n natural numbers using recursion(function return type)
#include<iostream>
using namespace std;
int func(int n)
{
    if(n==0)
    return 0;
    return n+func(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Sum of n natural numbers is : "<<func(n)<<endl;
    return 0;
}