// Rotate Strings
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string goal;
    cout << "Enter the goal string: ";
    cin >> goal;
    if(s.length() != goal.length())
    {
        cout << "false";
        return 0;
    }
    string temp = s + s;
    if(temp.find(goal) != string::npos) // in leetcode use return (s+s).contains(goal);
        cout << "true";
    else
        cout << "false";
    return 0;
}