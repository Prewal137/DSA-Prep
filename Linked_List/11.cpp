//Delete nth node from the back of the linked list
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
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    nodes* slow = head;
    nodes* fast = head;
    for(int i = 0; i < n; i++)
        fast = fast->next;
    if(fast == NULL)
    {
        nodes* temp = head;
        head = head->next;
        delete temp;
        cout << "Linked List after deletion : ";
        printLL(head);
        return 0;
    }
    while(fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    nodes* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    cout << "Linked List after deletion : ";
    printLL(head);
    return 0;
}