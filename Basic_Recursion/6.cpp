//Print sum of n natural numbers using recursion(parameterised)
#include<iostream>
using namespace std;
void func(int i,int sum)
{
    if(i<1)
    {
        cout<<"Sum of n natural numbers is : "<<sum<<endl;
        return;
    }
    func(i-1,sum+i);
    
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    func(n,0);
    return 0;
}