//Print all divisors of a number
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}*/
// To reduce the time complexity to O(sqrt(n)), we can modify the code as follows:
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int i,n;
    vector<int> ls;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i*i<=n;i++)//we can also write i<=sqrt(n) but it is not efficient as we are calculating sqrt(n) in every iteration, that is calling function sqrt() in every iteration, which is not efficient.
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if((n/i)!=i)
            {
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(int x:ls)
    {
        cout<<x<<" ";
    }
    return 0;

}