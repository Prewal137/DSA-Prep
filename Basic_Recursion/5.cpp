// Print n to 1 linearly using recursion and backtracing(no using i-- in the function call)
#include<iostream>
using namespace std;
void fun(int i, int n)
{
    if(i>n)
    return;
    fun(i+1,n);
    cout<<i<<endl;
    
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    fun(1,n);
    return 0;
}