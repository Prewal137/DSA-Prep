//String is palindrome or not using recursion(leetcode 125 we need to make it to lowercase and remove all non alphanumeric characters)
#include<iostream>
using namespace std;
bool palindrome(int i,string s)
{
    if(i>=s.size()/2)
    return true;
    if(s[i]!=s[s.size()-i-1])
    return false;
    return palindrome(i+1,s);
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<palindrome(0,s);
}
/*
class Solution {
public:
    bool isPalindrome(string s) {
         int left = 0, right = s.size() - 1;

        while (left < right) {
            
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

           
            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};
*/