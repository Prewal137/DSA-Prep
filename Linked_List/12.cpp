// Delete the middle node of the linked list
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
int main()
{
    vector<int> arr = {1,2,3,4,5};
    nodes* head = convertArr2LL(arr);
    cout << "Original Linked List : ";
    printLL(head);
    if(head == NULL || head->next == NULL)
    {
        cout << "Linked List after deleting middle : ";
        cout << "NULL";
        return 0;
    }
    nodes* slow = head;
    nodes* fast = head;
    fast = fast->next->next;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    nodes* middle = slow->next;
    slow->next = slow->next->next;
    delete middle;
    cout << "Linked List after deleting middle : ";
    printLL(head);
    return 0;
}