// character hashing if string is all lowercase and we need to find the occurance of each character in the string
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    //precompute
    int hash[26]={0};//26 because we have 26 characters in the english alphabet
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']+=1;//s[i]-'a' because we need to convert the character to its corresponding index in the hash array
    }
    int q;
    cout<<"Enter the number of queries : ";
    cin>>q;
    while(q--)
    {
        char c;
        cout<<"Enter the character to find its occurance : ";
        cin>>c;
        //fetch
        cout<<"Occurance of "<<c<<" is :"<<hash[c-'a']<<endl;
    }
    return 0;
}