//Armstrong number or not
# include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,sum=0,dup,cnt=0,a;
   cout<<"Enter the value of n: ";
    cin>>n;
    a=n;
    dup=n;
    while(a!=0)
    {
        cnt++;
        a=a/10;
    }
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+pow(digit,cnt);
        n=n/10;
    }
    if(dup==sum)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong number"<<endl;
    }
    return 0;
}