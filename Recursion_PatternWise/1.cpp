// Pow(x, n)
#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n)
{
    double ans = 1.0;
    long long nn = n;
    if(nn < 0)
        nn = -1 * nn;
    while(nn)
    {
        if(nn % 2)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    if(n < 0)
        ans = 1.0 / ans;
    return ans;
}

int main()
{
    double x;
    int n;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Answer is : " << myPow(x, n);
    return 0;
}