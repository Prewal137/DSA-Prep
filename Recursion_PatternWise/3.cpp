// Sort a Stack using Recursion
#include<bits/stdc++.h>
using namespace std;
void insertCorrectPosition(int x, stack<int> &st)
{
    if(st.empty() || st.top() <= x)
    {
        st.push(x);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertCorrectPosition(x, st);
    st.push(topElement);
}
void sortStack(stack<int> &st)
{
    if(st.empty())
        return;
    int topElement = st.top();
    st.pop();
    sortStack(st);
    insertCorrectPosition(topElement, st);
}
void printStack(stack<int> st)
{
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(5);
    cout << "Original Stack : ";
    printStack(st);
    sortStack(st);
    cout << "Sorted Stack : ";
    printStack(st);
    return 0;
}