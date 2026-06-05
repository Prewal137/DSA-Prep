//Pascal triangle 
//Given row and column, return the value at that position in the Pascal triangle.
#include<bits/stdc++.h>
using namespace std;
long long NCRfun(long long n,long long r)
{
    long long res=1;
    for(long long i=0;i<r;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main()
{
    long long r,c;
    cout<<"Enter the row number:  ";
    cin>>r;
    cout<<"\nEnter the column number: ";
    cin>>c;
    cout<<"\nElement at row "<<r<<" and column "<<c<<" is "<<NCRfun(r-1,c-1);
    return 0;
}
