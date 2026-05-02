// GCD of two numbers
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int b,a;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    while(a!=0 && b!=0)
    {
        if(a>b)
        {
         a=a%b;
        }
        else
        {
           b=b%a; 
        }
    }
    if(a==0)
        cout<<"GCD is "<<b<<endl;
    else
        cout<<"GCD is "<<a<<endl;
    return 0;
   
}