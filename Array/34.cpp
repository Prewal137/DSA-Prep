//Pascal triangle 
//Print any nth row of the Pascal triangle.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r, ans = 1;
    cout << "Enter the row number: ";
    cin >> r;
    cout << "The elements in the row " << r << " are: ";
    cout << ans << " ";
    for(long long i = 1; i < r; i++)
    {
        ans = ans * (r - i);
        ans = ans / i;
        cout << ans << " ";
    }
    return 0;
}