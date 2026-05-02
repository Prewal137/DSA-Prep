//Find the count of digits in a number

#include <iostream>
using namespace std;
int countDigits(int n)
{
    int cnt=0;
    //cnt=log10(n)+1; // this is the formula to count the number of digits in a number(shortcut)
    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    return cnt;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Count of digits in n is "<<countDigits(n)<<endl;
    return 0;
}


