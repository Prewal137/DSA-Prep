// Print 1 to n linearly using recursion and backtracing(no using i++ in the function call)
#include<iostream>
using namespace std;
void fun(int i, int n)
{
    if(i<1)
    return;
    fun(i-1,n);
    cout<<i<<endl;
    
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    fun(n,n);
    return 0;
}