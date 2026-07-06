// Reverse a Stack using Recursion
#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(int x, stack<int> &st)
{
    if(st.empty())
    {
        st.push(x);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtBottom(x, st);
    st.push(topElement);
}
void reverseStack(stack<int> &st)
{
    if(st.empty())
        return;
    int topElement = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(topElement, st);
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
    reverseStack(st);
    cout << "Reversed Stack : ";
    printStack(st);
    return 0;
}