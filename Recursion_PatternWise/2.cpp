// Count Good Numbers
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
long long findPow(long long a, long long b)
{
    if(b == 0)
        return 1;
    long long half = findPow(a, b / 2);
    long long res = (half * half) % M;
    if(b % 2 == 1)
        res = (a * res) % M;
    return res;
}
int countGoodNumbers(long long n)
{
    long long even = findPow(5, (n + 1) / 2);
    long long odd = findPow(4, n / 2);
    return (even * odd) % M;
}
int main()
{
    long long n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Number of Good Numbers : " << countGoodNumbers(n);
    return 0;
}