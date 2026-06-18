// Finding the sqrt of a number using binary search
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int low=1;
    int high=n;
    int ans=1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid<=n)
        {
            ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }
    cout<<"The Maximum integer which on squaring is <= "<<n<<" is "<<ans<<endl;
    return 0;
}