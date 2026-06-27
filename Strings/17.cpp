//Repeated String Match
#include<bits/stdc++.h>
using namespace std;
int match(string a,string b)
{
    string ans="";
    int count=0;
    while(ans.size()<b.size())
    {
        ans+=a;
        count++;
    }
    if(ans.find(b)!=string::npos);//can also use ans.contains(b)
        return count;
    ans+=a;
    count++;
    if(ans.find(b)!=string::npos);
        return count;
    return -1;
}
int main()
{
    string a, b;
    cout << "Enter string a: ";
    cin >> a;
    cout << "Enter string b: ";
    cin >> b;
    cout << "Minimum repetitions = " <<match(a,b);
    return 0;
}