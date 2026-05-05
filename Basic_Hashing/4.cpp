// character hashing if string is all lowercase and we need to find the occurance of each character in the string using map
#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    //precompute
    map<char,int>hash;
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]+=1;//s[i] because we need to use the character as the key in the map and we need to increment its value by 1 for each occurrence of that character in the string
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
        cout<<"Occurance of "<<c<<" is :"<<hash[c]<<endl;//hash[c] because we need to use the character as the key in the map to get its corresponding value which is the occurance of that character in the string
    }
    return 0;
}