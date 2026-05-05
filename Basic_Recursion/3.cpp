// Print n to 1 linearly using recursion    
#include<iostream>
using namespace std;
void fun(int i, int n)
{
    if(i<n)//if(i<1) another way to write the condition
    return;
    cout<<i<<endl;
    fun(i-1,n);
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    fun(n,1);//fun(n,n) another way to call the function
    return 0;
}