//Prime number or not
/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<n<<" is a prime number."<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}*/
// To reduce the time complexity to O(sqrt(n)), we can modify the code as follows:
#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        cout<<n<<" is a prime number."<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}