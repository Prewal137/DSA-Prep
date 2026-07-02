// Check Linked List is Palindrome or not
#include<bits/stdc++.h>
using namespace std;
class nodes
{
public:
    int data;
    nodes* next;
    nodes(int data1, nodes* next1)
    {
        data = data1;
        next = next1;
    }
    nodes(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
nodes* convertArr2LL(vector<int>& arr)
{
    nodes* head = new nodes(arr[0]);
    nodes* mover = head;
    for(int i = 1; i < arr.size(); i++)
    {
        nodes* temp = new nodes(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
void printLL(nodes* head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
nodes* reverseLL(nodes* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    nodes* newHead = reverseLL(head->next);
    nodes* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    vector<int> arr = {1,2,3,2,1};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    if(head == NULL || head->next == NULL)
    {
        cout << "Palindrome";
        return 0;
    }
    nodes* slow = head;
    nodes* fast = head;
    while(fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    nodes* newHead = reverseLL(slow->next);
    nodes* first = head;
    nodes* second = newHead;
    bool flag = true;
    while(second != NULL)
    {
        if(first->data != second->data)
        {
            flag = false;
            break;
        }
        first = first->next;
        second = second->next;
    }
    reverseLL(newHead);
    if(flag)
        cout << "Linked List is Palindrome";
    else
        cout << "Linked List is Not Palindrome";

    return 0;
}