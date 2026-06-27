//Count and Say
#include<bits/stdc++.h>
using namespace std;
string countAndSay(int n)
{
    if(n==1)
        return "1";
    string say=countAndSay(n-1);
    string result="";
    for(int i=0;i<say.length();i++)
    {
        char ch=say[i];
        int count=1;
        while(i<say.length()-1 && say[i]==say[i+1])
        {
            count++;
            i++;
        }
        result+=to_string(count)+string(1,ch);
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Count and Say sequence is : "<<countAndSay(n);
    return 0;
}